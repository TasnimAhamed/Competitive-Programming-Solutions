#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m; cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m, 0));
    for (int i = 0; i < n; i += 2) {
    	for (int j = 0; j < m; j += 2) {
    		if (i % 4 == 0) {
    			if (j % 4 == 0) {
    				grid[i][j] = 1;
    				grid[i + 1][j + 1] = 1;
    			}
    			else {
    				grid[i + 1][j] = 1;
    				grid[i][j + 1] = 1;
    			}
    		}
    		else {
    			if (j % 4 == 0) {
    				grid[i + 1][j] = 1;
    				grid[i][j + 1] = 1;    				
    			}
    			else {
    				grid[i][j] = 1;
    				grid[i + 1][j + 1] = 1;
    			}
    		}
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