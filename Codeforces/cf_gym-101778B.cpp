#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
    ll n, a;
    cin >> n >> a;

    ll dis = 1 + 8 * n * (a - 1);
    ll sq = ((ld)sqrt(dis));
    ll ans = (sq + 1) / 2;
    ans = min(ans, n);

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