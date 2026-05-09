#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m, k; cin >> n >> m >> k;
    vector<vector<int>> grid(n, vector<int> (m));
    int cnt = 1;
    for (int i = 0; i < n; i++) {
    	for (int j = 0; j < m; j++) {
    		grid[i][j] = cnt++;
    		if (cnt > k) {
    			cnt = 1;
    		}
    	}
    }

    if (m % k == 0) {
    	for (int i = 1; i < n; i++) {
    		for (int j = 0; j < m - 1; j++) {
    			grid[i][j] = grid[i - 1][j + 1];
    		}
    		grid[i][m - 1] = grid[i - 1][0];
    	}
    }

    for (int i = 0; i < n; i++) {
    	for (int j = 0; j < m; j++) {
    		cout << grid[i][j] << " ";
    	}
    	cout << "\n";
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