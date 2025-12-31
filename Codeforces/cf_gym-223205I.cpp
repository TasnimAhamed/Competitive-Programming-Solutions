#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int MAXN = 505;

void mat_swap(int n, int x, int y, vector<vector<int>> &v){
	for(int i = 1; i <= n; i++){
		swap(v[x][i], v[y][i]);
	}
	for(int i = 1; i <= n; i++){
		swap(v[i][x], v[i][y]);
	}
}

void solve() {
    int n, x, y; cin >> n >> x >> y;
    vector<vector<int>> v(n+1, vector<int>(n+1));

    for (int i = 1; i <= n; i++){
    	for (int j = 1; j <= n; j++){
    		cin >> v[i][j];
    	}
    }

    mat_swap(n, x, y, v);

    for (int i = 1; i <= n; i++) {
    	for (int j = 1; j <= n; j++) {
    		cout << v[i][j] << ' ';
    	}
    	cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;

}