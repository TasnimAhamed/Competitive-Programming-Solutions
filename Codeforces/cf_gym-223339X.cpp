#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 12;
int r, c, mx = INT_MIN;
int mat[N][N];

void path_sum(int i, int j, int curr){
	if (i == r and j == c) {
		mx = max(mx, curr + mat[i][j]);
		return;
	}
	if(i < r){
		path_sum(i + 1, j, curr + mat[i][j]);
	}

	if(j < c){
		path_sum(i, j + 1, curr + mat[i][j]);
	}
}

void solve() {
    cin >> r >> c;

    for (int i = 1; i <= r; i++) {
    	for (int j = 1; j <= c; j++) {
    		cin >> mat[i][j];
    	}
    }

    path_sum(1, 1, 0);

    cout << mx << "\n";
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