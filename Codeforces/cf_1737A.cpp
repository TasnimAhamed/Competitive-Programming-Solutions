#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n, k; cin >> n >> k;
    string s; cin >> s;
    map<char, int> mp;
    for (auto ch : s) {
    	mp[ch]++;
    }
    string ans = "";
    for (int i = 0; i < k; i++) {
    	int cnt = n / k;
    	for (char ch = 'a'; ch <= 'z'; ch++) {
    		if (mp[ch] == 0 or cnt == 0) {
    			ans += ch;
    			break;
    		}
    		else {
    			mp[ch]--;
    			--cnt;
    		}
    	}
    }

    // sort(ans.rbegin(), ans.rend());

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