#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, a, x, b, y; cin >> n >> a >> x >> b >> y;

    for (int i = 1; i <= 2 * n; i++){
    	// cerr << a << " " << b << "\n";
    	if (a == b) {
    		cout << "YES\n";
    		return;
    	}
    	if (a == x or b == y) {
    		break;
    	}
		++a;
		if (a > n) {
			a = 1;
		}
    	--b;
    	if (b <= 0) {
    		b = n;
    	}
    }

    cout << "NO\n";
    
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