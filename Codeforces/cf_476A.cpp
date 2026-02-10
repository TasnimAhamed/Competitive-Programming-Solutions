#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m; cin >> n >> m;

	int mn = INT_MAX;
	for (int y = 0; y <= n / 2; y++) {
	  int x = n - 2 * y;
      if ((x + y) % m == 0) {
      	mn = min(mn, x + y);
      }
	}

    if (mn != INT_MAX) {
    	cout << mn << "\n";
    }
    else {
    	cout << -1 << "\n";
    }
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