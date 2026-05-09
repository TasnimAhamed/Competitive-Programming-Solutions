#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    vector<array<int, 2>> v;
    for (int i = 0; i < n; i++) {
    	int l, r; cin >> l >> r;
    	if (k >= l and k <= r) {
    		v.push_back({l, r});
    	}
    }

    int sz = v.size();
    cerr << sz << "\n";
    if (sz == 0) {
    	cout << "NO\n";
    	return;
    }

    // for (auto [l, r] : v) {
	// 	cout << l << " " << r << "\n";
	// }

    for (int i = 1; i <= 50; i++) {
    	int cnt = 0;
    	for (auto [l, r] : v) {
    		if (i >= l and i <= r) {
    			++cnt;
    		}
    	}

    	if (cnt == sz and i != k) {
    		cout << "NO\n";
    		return;
    	}
    }

    cout << "YES\n";

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