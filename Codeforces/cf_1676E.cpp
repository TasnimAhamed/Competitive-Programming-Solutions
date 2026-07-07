#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, q; cin >> n >> q;
    vector<int> v(n), pref(n, 0);
    for (auto &x : v) {
    	cin >> x;
    }
    sort(v.rbegin(), v.rend());

    for (int i = 0; i < n; i++) {
    	if (i) {
    		pref[i] = pref[i - 1]  + v[i];
    	}
    	else {
    		pref[i] = v[i];
    	}
    }

    while (q--) {
    	int x; cin >> x;
    	int idx = lower_bound(pref.begin(), pref.end(), x) - pref.begin();
    	if (idx == n) {
    		cout << -1 << "\n";
    	}
    	else {
    		cout << idx + 1 << "\n";
    	} 
    }

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