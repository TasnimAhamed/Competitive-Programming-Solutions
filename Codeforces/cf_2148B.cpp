#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n, m; cin >> n >> m;
	int x, y; cin >> x >> y;
	vector<int> a(n), b(m);
	for (auto &x : a) {
		cin >> x;
	}
	for (auto &x : b) {
		cin >> x;
	}
	int mx = max(n, m);
	int mn = min(n , m);
	int ans = min(n + m, 2 * mn + mx - mn);
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