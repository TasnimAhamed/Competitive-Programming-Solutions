#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 676767677;

void solve() {
    int x, y; cin >> x >> y;

    int sm = abs(x - y);
    int mx = 1;
    int cnt = 0;
    for (int i = 1; i * i <= sm; i++) {
    	if (sm % i == 0) {
    		++cnt;
    		if (i != sm / i) {
    			++cnt;
    		}
    	}
    }
    mx = max(mx, cnt);
    cout << mx << "\n";
    for (int i = 0; i < x; i++) {
    	cout << 1 << " ";
    }
    for (int i = 0; i < y; i++) {
    	cout << -1 << " ";
    }
    cout << "\n";
   
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