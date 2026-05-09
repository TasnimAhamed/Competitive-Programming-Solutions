#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m; cin >> n >> m;
    int r, c; cin >> r >> c;
    
    ll ans = (m - c);
    ans += 1LL * (m - 1) * (n - r);
    ans += 1LL * (n - r) * m;

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