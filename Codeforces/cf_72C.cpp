#include <iostream>
using namespace std;

void solve() {
    int n; cin >> n;
    int even_cnt = 0, odd_cnt = 0;
    for (int i = 1; i * i <= n; i++) {
    	if (n % i == 0) {
    		if (i & 1) {
    			odd_cnt++;
    		}
    		else {
    			even_cnt++;
    		}

    		int div = n / i;
    		if (div != i) {
    			if (div & 1) {
    				odd_cnt++;
    			}
    			else {
    				even_cnt++;
    			}
    		}
    	}
    }

    cout << (odd_cnt == even_cnt ? "YES\n" : "NO\n");
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