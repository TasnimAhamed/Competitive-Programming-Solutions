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
    // for (auto x : v) {
    // 	cout << x << " ";
    // }
    // cout << "\n";

    for (int i = 0; i < n - 2; i++) {
    	if ((v[i + 1] + v[i + 2]) > v[i]) {
    		cout << "YES\n";
    		return;
    	}
    }
    cout << "NO\n";
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