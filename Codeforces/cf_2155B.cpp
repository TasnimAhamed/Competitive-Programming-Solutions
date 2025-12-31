#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;

    if((n * n - 1) == k or (n == 2 and k == 3)) {
    	cout << "NO\n";
    	return;
    }
    cout << "YES\n";
    vector<string> ans(n, string(n, 'R'));
    // for (auto s : ans) {
    // 	cout << s << "\n";
    // }
    int cnt = 0, last_row = n, last_col = n;
    for (int i = 0; i < n; i++) {
    	for (int j = 0; j < n; j++) {
    		if (cnt < k) {
    			ans[i][j] = 'U';
    			++cnt;
    		}
    		else{
    			last_row = i;
    			last_col = j;
    			break;
    		}
    	}
    	if(cnt == k) {
    		if(last_row == n and last_col == n) {
    			last_row = i + 1;
    			last_col = 0;
    		}
    		break;
    	}
    }
    // cout << last_row << "\n";

    for (int i = last_row; i < n; i++) {
    	ans[i][n - 1] = 'L';
    	// cout << i << "\n";
    }

    if(last_col == n - 1 and last_row != n - 1) {
    	ans[last_row][last_col] = 'D';
    }

    for (auto s : ans) {
    	cout << s <<  "\n";
    }

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