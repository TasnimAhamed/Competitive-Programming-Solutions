#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, q; cin >> n >> q;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    sort(v.rbegin(), v.rend());
    vector<int> diff(n + 2, 0);
    while (q--){
    	int l, r; cin >> l >> r;
    	diff[l] += 1;
    	diff[r + 1] -= 1;
    }
    for (int i = 1; i <= n; i++) {
    	diff[i] += diff[i - 1];
    }

    sort (diff.rbegin(), diff.rend());
    ll ans = 0;
    for (int i = 0; i < n; i++) {
    	ans += 1LL * v[i] * diff[i];
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