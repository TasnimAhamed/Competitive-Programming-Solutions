#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, x; cin >> n >> x;
    vector<array<ll, 3>> v(n);
    for (auto &x : v) {
    	cin >> x[0] >> x[1] >> x[2];
    }

    ll sum = 0, mx = LLONG_MIN;
    for (auto x : v) {
    	sum += (x[1] - 1) * x[0];

    	ll dis = x[1] * x[0] - x[2];
    	mx = max(mx, dis);
    }

    // cout << sum << " " << mx << "\n";

    if(sum >= x) {
    	cout << 0 << "\n";
    	return;
    }

    if (mx <= 0) {
    	cout << -1 << "\n";
    	return;
    }

    ll need = x - sum;
    ll ans = (need + mx - 1) / mx;

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