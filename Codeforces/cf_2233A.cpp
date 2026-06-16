#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, x, y, z; cin >> n >> x >> y >> z;

    ll mn = (n + x + y - 1) / (x + y);
    // cout << "mn: " << mn << "\n";

    ll rem = n - z * x;
    ll res = z + (rem + x + 10 * y - 1) / (x + 10 * y);
    cout << min(mn, res) << '\n';
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