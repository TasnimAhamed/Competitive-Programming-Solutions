#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m; cin >> n >> m;
    vector<string> str(n);
    for (auto &s : str) {
    	cin >> s;
    }

    for (int c = 0; c < m; c++) {
    	for (int r = n - 1; r >= 0; r--) {
    		if (str[r][c] == '*') {
    			// cout << r << " " << c << " " << str[r][c] << "\n";
    			for (int k = r; k < n; k++) {
    				// cout << "Helllo\n";
    				if (k + 1 < n and str[k + 1][c] == '.')  {
    					// cout << str[k][c] << " " << str[k + 1][c] << "\n"; 
    					swap(str[k][c], str[k + 1][c]);
    				}
    				else {
    					break;
    				}
    			}
    		}
    	}
    }

    for (auto s : str) {
    	cout << s << "\n";
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