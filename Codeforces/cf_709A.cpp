#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, b, d; cin >> n >> b >> d;

    int ans = 0, total = 0; 
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	if (x <= b) {
    		total += x;
    	}

    	if (total > d) {
    		++ans;
    		total = 0;
    	}
    }

    cout << ans << "\n";   
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