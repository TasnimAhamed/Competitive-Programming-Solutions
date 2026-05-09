#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++) {
    	int m; cin >> m;
    	vector<int> vv(m);
    	for (auto &x : vv) {
    		cin >> x;
    	}
    	v.push_back(vv);
    } 
    int x, y; cin >> x >> y;
    --x, --y;

    cout << v[x][y] << "\n";
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