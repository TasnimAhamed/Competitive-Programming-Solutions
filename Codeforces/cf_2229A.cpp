#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int mx = 0, mn = 1005;
    for (int i = 0; i < n; ++i)
    {
        int x; cin >> x;
        mx = max(mx, x);
        mn = min(mn, x);
    }

    cout << (mx - mn + 1) / 2 << "\n";

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