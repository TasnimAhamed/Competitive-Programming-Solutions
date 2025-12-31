#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int r, c; cin >> r >> c;
    int grid[r + 1][c + 1];

    int row_count[r+1]= {0};
    int col_count[c+1]= {0};

    int mx = -1;
    for (int i = 1; i <= r; i++) {
    	for (int j = 1; j <= c; j++) {
    		cin >> grid[i][j];
    		mx = max(mx, grid[i][j]);
    	}
    }
    int total = 0;

    for (int i = 1; i <= r; i++) {
    	for (int j = 1; j <= c; j++) {
    		if(grid[i][j] == mx) {
    			++total;
    			row_count[i]++;
    			col_count[j]++;
    		}
    	}
    }

    for (int i = 1; i <= r; i++) {
    	int paisi = 0;
    	for (int j = 1; j <= c; j++) {
    		int n_total = row_count[i] + col_count[j];
    		if(grid[i][j] == mx) {
    			--n_total;
    		}
    		if(n_total == total) {
    			cout << mx - 1 << "\n";
    			paisi = 1;
    			break;
    		}
    	}
    	if(paisi) {
    		return;
    	}
    }

    cout << mx << "\n";




}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}