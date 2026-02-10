#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
    	int f, t; cin >> f >> t;
    	if (t > k) {
    		mx = max(mx, f - (t - k));
    	}
    	else {
    		mx = max(mx, f);
    	}
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