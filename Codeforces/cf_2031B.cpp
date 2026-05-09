#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n + 1), pref_mx(n + 1, 0), suff_mn(n + 1);
    for (int i = 1; i <= n; i++) {
    	cin >> v[i];
    	pref_mx[i] = max(v[i], pref_mx[i - 1]);
    }
    suff_mn[n] = v[n];
    for (int i = n - 1; i >= 1; i--) {
    	suff_mn[i] = min(v[i], suff_mn[i + 1]);
    }

    for (int i = 1; i <= n; i++) {
    	if (abs(pref_mx[i] - suff_mn[i]) > 1) {
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