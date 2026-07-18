#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int k, l1, r1, l2, r2;
	cin >> k >> l1 >> r1 >> l2 >> r2;
	int mx = r2 / l1;
	vector<ll> vals;
	vals.push_back(1);
	ll pw = k;
	while (pw <= mx) {
		vals.push_back(pw);
		pw *= k;
	}

	int ans = 0;
	for (auto x : vals) {
		int mx = r2 / x;
		int mn = (l2 - 1) / x + 1;
		mn = max(mn, l1);
		mx = min(r1, mx);
		// if (mx < mn) {
		// 	continue;
		// }
		// cout << x << " -> " << (mx - mn + 1) << "\n";
		ans += max(0, (mx - mn + 1));
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