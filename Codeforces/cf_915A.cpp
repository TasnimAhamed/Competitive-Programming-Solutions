#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n, k; cin >> n >> k;
	vector<int> v(n);
	for (auto &x : v) {
		cin >> x;
	}
	int mn = INT_MAX;
	for (auto x : v) {
		if (k % x == 0){
			mn = min(mn, k / x);
		}
	}

	cout << mn << "\n";
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