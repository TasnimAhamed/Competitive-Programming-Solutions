#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int faces = 0;
    for (int i = 1; i <= 3; i++) {
    	for (int j = 0; j < 6; ++j)
    	{
    		int x; cin >> x;
    		if (x >= 4) {
    			++faces;
    		}
    	}
    }

    double res = (6 * faces) / 216.0;

    cout << fixed << setprecision(6) << res << "\n";
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