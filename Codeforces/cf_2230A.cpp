#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, a, b;
    cin >> n >> a >> b;

    ll gg = n / 3, rem = n % 3;

    ll ans = gg * min(3 * a, b);

    ans += min(rem * a, b);
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