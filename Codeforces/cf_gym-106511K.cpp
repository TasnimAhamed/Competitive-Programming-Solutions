#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int k; cin >> k;

    for (int i = 0; i <= 5000; i++) {
    	for (int j = 0; i + j <= 5000; j++) {
    		ll sum = i * (i - 1) * j / 2;

    		if (sum <= k) {
    			int need = k - sum;
    			int available = 5000 - (i + j);
    			int canMake = available - 2;
    			if (canMake >= need) {
    				cout << i + j + need + 2 << '\n';
    				for (int k = 0; k < i; k++) {
    					cout << 1 << "  ";
    				}
    				for (int k = 0; k < j; k++) {
    					cout << -2 << "  ";
    				}
    				cout << "3 3 ";
    				for (int k = 0; k < need; k++) {
    					cout << -6 << "  ";
    				}
    				cout << "\n";
    				return;
    			}
    		}
    	}
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