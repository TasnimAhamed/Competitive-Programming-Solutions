#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++) cin >> ar[i];
    
    int ans[n][n] = {0};

	for(int i = 0; i < n; i++) {
		int x = i, y = i;
		for(int j = 0; j < ar[i]; j++) {
			ans[x][y] = ar[i];
			if(y - 1 >= 0 && ans[x][y - 1] == 0) y--;
			else x++;
		}
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j <= i; j++){
			cout << ans[i][j] << " ";
		} cout << "\n";
	}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc = 1;
    // cin >> tc;
    while (tc--){
        solve();
    }
    return 0;
}