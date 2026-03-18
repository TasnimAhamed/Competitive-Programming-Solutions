#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
    	int x, y; cin >> x >> y;
    	mx = max(mx, x + y);
    }

    cout << mx << "\n";
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