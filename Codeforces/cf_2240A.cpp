#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    
    int ans = 0;
    int curr = 1;
    while (true) {
    	int mn = min(n / curr, k);
    	if (mn == 0) {
    		break;
    	}
    	ans += mn;
    	n -= (mn * curr);
    	curr *= 2;
    }

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