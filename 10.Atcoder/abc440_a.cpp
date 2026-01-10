#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int x, y; cin >> x >> y;
    cout << x * pow(2, y) << "\n";
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