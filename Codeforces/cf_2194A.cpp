#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, w; cin >> n >> w;
    ll ans = 1LL * (n / w) * (w - 1) + n % w;

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