#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, x, y; cin >> n >> x >> y;

    int per_car = y / x;

    cout << (n + per_car - 1) / per_car << "\n";

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