#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 2005;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto& x: v) {
    	cin >> x;
    }
    vector<vector<int>> ans;
    ans.push_back(v);
    for (int i = 1; i <= MAX; i++) {
    	map<int, int> mp;
    	for (auto x : v) {
    		mp[x]++;
    	}
    	for (auto &x : v) {
    		x = mp[x];
    	}
    	ans.push_back(v);
    }

    // cout << ans.size() << "\n";

    int q; cin >> q;
    while (q--) {
    	int x, k; cin >> x >> k;
    	if (k > MAX) {
    		k = MAX;
    	}

    	cout << ans[k][x - 1] << "\n";
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