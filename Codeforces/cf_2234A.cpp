#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	vector<int> v(n);
	for (auto &x : v) {
		cin >> x;
	}
	sort(v.rbegin(), v.rend());
	for (int i = 2; i < n; i++) {
		int rem = (v[i - 2] % v[i - 1]);
		if (rem != v[i]) {
			cout << "-1\n";
			return;
		}
	}

	cout << v[0] << " " << v[1] << "\n";
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