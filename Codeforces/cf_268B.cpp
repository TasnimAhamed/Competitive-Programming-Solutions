#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int ans = 0;
    for (int i = 1; i < n; i++) {
    	ans += (n - i) * i;
    	// cout << i << " -> "  << (n - i) * i << "\n";
    }

    cout << ans + n << "\n";

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