#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<ll> v(n + 1);
    ll ans = 0, mx1 = -2e18, mn1 = 2e18, mx2 = -2e18, mn2 = 2e18;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        if(i&1) {
            ans += v[i];
            mn1 = min(mn1, 2 * v[i] + i);
            mn2 = min(mn2, 2 * v[i] - i);
        }
        else{
            ans -= v[i];
             mx1 = max(mx1, 2 * v[i] + i);
             mx2 = max(mx2, 2 * v[i] - i);
        }
    }

    ll mx = n - 2;
    if(n&1) {
        ++mx;
    }
    mx = max({mx, mx1 - mn1, mx2 - mn2});
    // cout << ans << "\n";
    // cout << mx << "\n";
    cout << ans + mx << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}