#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    vector<int> ans(n, 0);
    int st = v[n - 1];
    for (int i = n - 1; i >= 0; i--) {
    	st = max(st, v[i]);
    	if (st) {
    		ans[i] = 1;
    		--st;
    	}
    }

    for (int i = 0; i < n; i++) {
    	cout << ans[i] << (i == n - 1 ? "\n" : " ");
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