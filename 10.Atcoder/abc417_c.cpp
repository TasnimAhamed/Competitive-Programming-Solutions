#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }

    map<ll, ll> mp;
    ll ans = 0;
    for(int i = 0; i < n; i++) {
    	int ff = i - v[i];
    	int ss = i + v[i];
    	ans += mp[ff];
    	mp[ss]++;
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