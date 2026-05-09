#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m;
    while (cin >> n >> m and n and m) {
    	vector<string> a(n), b(m);

    	for (auto &s : a) {
    		cin >> s;
    	}
    	for (auto &s : b) {
    		cin >> s;
    	}

    	auto rotate = [&] (){
    		for (int i = 0; i < m ; i++) {
    			for (int j = i + 1; j < m; j++) {
    				swap(b[i][j], b[j][i]);
    			}
    		}

    		for (int i = 0; i < m; i++) {
    			for (int j = 0; j < m / 2; j++) {
    				swap(b[i][j], b[i][m - j - 1]);
    			}
    		}
    	};

    	auto count = [&]() {
    		int cnt = 0;
			for (int i = 0; i + m <= n; i++) {
				for (int j = 0; j + m <= n; j++) { 
					int l = 0, r = 0;
					for (int  x = i; x < i + m; x++) {
						int ok = false;
						r = 0;
						for (int y = j; y < j + m; y++) {
							// cout << l << " " << r << "\n";
							// cout << a[x][y] << " " << b[l][r] << "\n";
							if (a[x][y] != b[l][r]) {
				 				ok = true; 
								break;
							}
							r++;
						}
			 			l++; 
						if (ok) {
							break;
						}	 
					}              
					if (l == m and r == m) {
						++cnt;
					}
				}
			}

			// for (auto x : b) {
			// 	for (auto ch : x) {
			// 		cout << ch;
			// 	}
			// 	cout << "\n"; 
			// }

			// cout << cnt << "\n";


			return cnt;
    	};
    	vector<int> ans;

		for (int i = 0; i < 4; i++) {
			int cnt = count();
			ans.push_back(cnt);
			rotate();
		}

		for (int i = 0; i < 4; i++) {
			cout << ans[i] << (i == 3 ? "\n" : " ");
		}


    }	
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}