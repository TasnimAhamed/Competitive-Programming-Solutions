#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int m, a, b, c; cin >> m >> a >> b >> c;
    int row_1 = m, row_2 = m;

    int ans = min(row_1, a);
    row_1 -= ans;

    ans += min(row_2, b);
    row_2 -= min(row_2, b);

    ans += min(row_1 + row_2, c);
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