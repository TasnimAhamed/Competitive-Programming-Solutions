#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    map<char, int> mp;
    for (int i = 0; i < n; i++) {
    	string s; cin >> s;
    	mp[s[0]]++;
    }
    int ans = 0;
    for (auto& [key, val] : mp) {
		int left = val / 2;
		int right = (val + 1) / 2;
		ans += (left * (left - 1) / 2);
		ans += (right * (right - 1) / 2);
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}