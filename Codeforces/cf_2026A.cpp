#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int x, y, k; cin >> x >> y >> k;

    int m = min(x, y);

    cout << 0 << " " << 0 << " " << m << " " << m << "\n";
    cout << 0 << " " << m << " " << m << " " << 0 << "\n";
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