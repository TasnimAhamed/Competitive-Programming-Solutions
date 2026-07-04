#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {

    int n; cin >> n;
    vector<string> s(n);
    for (auto &x : s) {
    	cin >> x;
    }

    int ff_cnt[27][27] = { 0 };
    int ss_cnt[27][27] = { 0 };
    ll ans = 0;
    for (auto x : s) {
    	char ff_char = x[0];
    	char ss_char = x[1];
    	// cout << x << "\n";
    	int total_ff = ff_cnt[ff_char - 'a'][26] - ff_cnt[ff_char - 'a'][ss_char - 'a'];
    	// cout << ff_cnt[ff_char - 'a'][26] << " " << ff_cnt[ff_char - 'a'][ss_char - 'a'] << "\n";
    	// cout << total_ff << "\n\n";

    	ff_cnt[ff_char - 'a'][ss_char - 'a']++;
    	ff_cnt[ff_char -'a'][26]++;


    	int total_ss = ss_cnt[ss_char - 'a'][26] - ss_cnt[ss_char - 'a'][ff_char - 'a'];
    	// cout << ss_cnt[ss_char - 'a'][26] << " " << ff_cnt[ss_char - 'a'][ff_char - 'a'] << "\n";
    	// cout << total_ss << "\n\n";


    	ss_cnt[ss_char - 'a'][ff_char - 'a']++;
    	ss_cnt[ss_char -'a'][26]++;

    	ans += total_ff + total_ss;

    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}