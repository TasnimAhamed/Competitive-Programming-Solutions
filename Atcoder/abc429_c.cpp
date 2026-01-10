#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }

    map<int, int> mp;
    for (auto x : v) {
    	mp[x]++;
    }
    ll ans = 0;
    for (auto [val, cnt] : mp) {
    	ans += (1LL * cnt * (cnt - 1) / 2) * 1LL * (n - cnt);
    }

    cout << ans << "\n";


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;
}