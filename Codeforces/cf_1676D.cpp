#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m; cin >> n >> m;

    vector<vector<int>> grid(n + 1, vector<int> (m + 1));
    for (int i = 1; i <= n; i++) {
    	for (int j = 1; j <= m; j++) {
    		cin >> grid[i][j];
    	}
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
    	for (int j = 1; j <= m; j++) {
    		int tot = 0;
    		int st = i, en = j;
    		while (st >= 1 and en >= 1) {
    			tot += grid[st][en];
    			--st;
    			--en;
    		}
    		st = i, en = j;
    		while (st <= n and en <= m) {
    			tot += grid[st][en];
    			++st;
    			++en;
    		}
    		st = i, en = j;
    		while (st <= n and en >= 1) {
    			tot += grid[st][en];
    			++st;
    			--en;
    		}
    		st = i, en = j;
    		while (st >= 1 and en <= m) {
    			tot += grid[st][en];
    			--st;
    			++en;
    		}
    		tot -= 3 * grid[i][j];
    		ans = max(ans, tot);
    	}
    }

    cout << ans << "\n";
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