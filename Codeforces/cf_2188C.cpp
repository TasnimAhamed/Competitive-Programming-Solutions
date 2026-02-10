#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }

    if (is_sorted(v.begin(), v.end())) {
    	cout << -1 << "\n";
    	return;
    }

    vector<int> cpy(n);

    for (int i = 0; i < n; i++) {
    	cpy[i] = v[i];
    }
    sort(cpy.begin(), cpy.end());
    
    int mx = cpy.back(), mn = cpy[0];
    int ans = 2e9;
    for (int i = 0; i < n; i++) {
    	if (v[i] != cpy[i]) {
    		ans = min(ans, max(v[i] - mn, mx - v[i]));
    		// cout << ans << "\n";
    	}
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