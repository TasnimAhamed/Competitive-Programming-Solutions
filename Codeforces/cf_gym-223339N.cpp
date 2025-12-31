#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void add_mat(int st, int en, int r, int c, vector<vector<int>> &a, vector<vector<int>> &b) {
	if(st > r) {
		return;
	}
	a[st][en] += b[st][en];
	en++;
	if(en > c){
		for(int i = 0; i < en; i++){
			cout << a[st][i] << (i < en-1 ? " ": "\n");
		}
		++st;
		en = 0;
	}

	add_mat(st, en, r, c, a, b);
}

void solve() {
    int r, c;
    cin >> r >> c;
    vector<vector<int>> a(r, vector<int>(c)), b(r, vector<int>(c));
    for (auto &row : a) {
    	for (auto &x : row){
    		cin >> x;
    	}
    }

    for (auto &row : b) {
    	for (auto &x : row){
    		cin >> x;
    	}
    }

    add_mat(0, 0, r-1, c-1, a, b);
    
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