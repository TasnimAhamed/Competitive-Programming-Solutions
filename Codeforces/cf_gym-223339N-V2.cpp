#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 105;
int r, c, a[N][N], b[N][N];
void add_mat(int i, int j){
	if(i >= r){
		return;
	}
	if(j >= c){
		add_mat(i+1, 0);
		return;
	}
	cout << a[i][j] + b[i][j] << (j < c - 1 ? " ": "\n");
	add_mat(i, j + 1);
}
void solve() {
    cin >> r >> c;
    for (int i = 0; i < r; i++) {
    	for (int j = 0; j < c; j++) {
    		cin >> a[i][j];
    	}
    }
    for (int i = 0; i < r; i++) {
    	for (int j = 0; j < c; j++) {
    		cin >> b[i][j];
    	}
    }

    add_mat(0, 0);
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