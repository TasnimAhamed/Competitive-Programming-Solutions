#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = 998244353;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &x : a) {
    	cin >> x;
    }
    for (auto &x : b) {
    	cin >> x;
    }
    sort(b.begin(), b.end());
    vector<ll> pref(m);
    pref[0] = b[0];
    for (int i = 1; i < m; i++) {
    	pref[i] = (pref[i - 1] + b[i]);
    }
    // for (auto x : pref) {
    // 	cout << x << " ";
    // } 
    // cout << "\n";

    ll sum = 0;
	for (auto x : a) {
	    int idx = upper_bound(b.begin(), b.end(), x) - b.begin(); 
	    ll left = idx, right = m - left;

	    ll left_sum = 0;
	    if (idx) {
	        left_sum = ((left % MOD) * (x % MOD)) % MOD;
	        left_sum = (left_sum - pref[idx - 1] % MOD + MOD) % MOD;
	    }

	    ll total_right = (pref[m - 1] - (idx > 0 ? pref[idx - 1] : 0) + MOD) % MOD;
	    ll right_sum = (total_right - (right % MOD) * (x % MOD) % MOD + MOD) % MOD;

	    sum = (sum + (left_sum + right_sum) % MOD) % MOD;
	}

	cout << sum << "\n";
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