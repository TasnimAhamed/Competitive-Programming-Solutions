#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MX = 1e3 + 5;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    vector<bool> check(MX, 0);
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--) {
    	if (!check[v[i]]) {
    		ans.push_back(v[i]);
    		check[v[i]] = 1;
    	}
    }
    cout << ans.size() << "\n";
    for (int i = (int)ans.size() - 1; i >= 0; i--) {
    	cout << ans[i] << " ";
    }
    cout << "\n";
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