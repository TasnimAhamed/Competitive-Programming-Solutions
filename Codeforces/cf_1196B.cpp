#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    int odd_cnt = 0;
    for (auto &x : v) {
    	cin >> x;
    	if (x & 1) {
    		odd_cnt++;
    	}
    }

    if (odd_cnt < k or (k % 2 != odd_cnt % 2)) {
    	cout << "NO\n";
    	return;
    }

    cout << "YES\n";
    for (int i = 0; i < n; i++) {
    	if (v[i] & 1 and k > 1) {
    		cout << i + 1 << " ";
    		--k;
    	}
    }
	cout << n << "\n";
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