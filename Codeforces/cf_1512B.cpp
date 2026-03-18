#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	string s[n];
	for (auto &x  : s) {
		cin >> x;
	}
	int f_row = -1, f_col = -1, s_row = -1, s_col = -1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (s[i][j] == '*') {
				if(f_row == -1) {
					f_row = i;
					f_col = j;
				}
				else {
					s_row = i;
					s_col = j;
				}
			}
		}
	}

	if (f_row == s_row) {
		if (f_row - 1 >= 0) {
			s[f_row - 1][f_col] = s[s_row - 1][s_col] = '*';
		}
		else {
			s[f_row + 1][f_col] = s[s_row + 1][s_col] = '*';
		}
	}
	else  if (f_col == s_col) {
		if (f_col - 1 >= 0) {
			s[f_row ][f_col - 1] = s[s_row][s_col - 1] = '*';
		}
		else {
			s[f_row][f_col + 1] = s[s_row][s_col + 1] = '*';
		}
	}
	else {
		s[f_row][s_col] = s[s_row][f_col] = '*';
	}

	for (auto x : s) {
		cout << x << "\n";
	}


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}