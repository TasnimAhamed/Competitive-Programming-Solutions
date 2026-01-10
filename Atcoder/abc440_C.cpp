#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, w; cin >> n >> w;
    vector<ll> v(n);
    for (auto &x : v) {
        cin >> x;
    }
    vector<ll> cost(2 * w, 0);
    for (int i = 1; i <= n; i++){
        cost[i % (2 * w)] += v[i - 1];
    }

    vector<ll> new_cost(4 * w);
    for (int i = 0; i < 2 * w; i++) {
        new_cost[i] = new_cost[i + 2 * w] = cost[i];
    }

    ll res = 0;
    for (int i = 0; i < w; i++) {
        res += new_cost[i];
    }
    ll ans = res;
    for (int i = w; i < 4 * w; i++) {
        res += new_cost[i];
        res -= new_cost[i - w];
        ans = min(ans, res);
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