#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int y, k, n; cin >> y >> k >> n;
    vector<int> ans;
    for (int i = 1; i * k <= n; i++) {
    	int nw = i * k - y;
    	if (nw > 0) {
    		ans.push_back(nw);
    	}
    } 
    if (ans.size()) {
    	for (auto x : ans) {
    		cout << x << " ";
    	}
    	cout << "\n";
    }
    else {
    	cout << -1 << "\n";
    }
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