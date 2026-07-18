#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    int mx = 0;
    for (int i = 0; i < n; i++){
    	for (int j = i; j < n; j++) {
    		int _xor = 0;
    		for (int k = i; k <= j; k++) {
    			_xor ^= v[k];
    		}
    		mx = max(mx, _xor);
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