#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int x, y; cin >> x >> y;
    int n = x + y;

    if (n & 1) {
        --y;
    }
    else {
        --x;
    }

    if (x < 0 or y < 0 or x > y) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    for (int i = 2; i <= n - x; i++) {
        cout << 1 << " " << i << "\n";
    }
    int st = 2;

    for (int i = n - x + 1; i <= n; i++) {
        cout << st++ << " " << i << "\n";
    }

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