#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n), c(n);
    for (auto &x : a) {
    	cin >> x;
    }
    for (auto &x : b) {
    	cin >> x;
    }
    for (auto &x : c) {
    	cin >> x;
    }

    vector<vector<int>> ab(n, vector<int>(n));

	for (int j = 0; j < n; j++) {
	    vector<int> tmp(2 * n);

	    for (int i = 0; i < 2 * n; i++) {
	        tmp[i] = (a[i % n] < b[(j + i) % n]);
	    }

	    int cnt = 0;
	    for (int i = 0; i < n; i++) {
	        cnt += tmp[i];
	    }

	    for (int i = 0; i < n; i++) {
	        ab[i][j] = (cnt == n);
	        cnt -= tmp[i];
	        cnt += tmp[i + n];
	    }
	}

	vector<vector<int>> bc(n, vector<int>(n));

	for (int j = 0; j < n; j++) {
	    vector<int> tmp(2 * n);

	    for (int i = 0; i < 2 * n; i++) {
	        tmp[i] = (b[i % n] < c[(j + i) % n]);
	    }

	    int cnt = 0;
	    for (int i = 0; i < n; i++) {
	        cnt += tmp[i];
	    }

	    for (int i = 0; i < n; i++) {
	        bc[i][j] = (cnt == n);
	        cnt -= tmp[i];
	        cnt += tmp[i + n];
	    }
	}

	ll ans = 0;
	for (int j = 0; j < n; j++) {
	    ll cnt1 = 0;
	    for (int i = 0; i < n; i++) { 
	        cnt1 += ab[i][j];
	    }

	    ll cnt2 = 0;
	    for (int k = 0; k < n; k++) { 
	        cnt2 += bc[j][k];
	    }

	    ans += (cnt1 * cnt2);
	}

	cout << ans << "\n";


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}