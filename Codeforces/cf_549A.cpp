#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m; cin >> n >> m;
    vector<string> v(n);

    for (auto &s : v) {
    	cin >> s;
    }

    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
    	for (int j = 0; j < m - 1; j++) {
    		int f = 0, a = 0, c = 0, e = 0;
    		if (v[i][j] == 'f' or v[i][j + 1] == 'f' or v[i + 1][j] == 'f' or v[i + 1][j + 1] == 'f') {
    			f++;
    		}
    		if (v[i][j] == 'a' or v[i][j + 1] == 'a' or v[i + 1][j] == 'a' or v[i + 1][j + 1] == 'a') {
    			a++;
    		}
    		if (v[i][j] == 'c' or v[i][j + 1] == 'c' or v[i + 1][j] == 'c' or v[i + 1][j + 1] == 'c') {
    			c++;
    		}
    		if (v[i][j] == 'e' or v[i][j + 1] == 'e' or v[i + 1][j] == 'e' or v[i + 1][j + 1] == 'e') {
    			e++;
    		}

    		if (f and a and c and e) {
    			++ans;
    		}	
    	}
    }

    cout << ans << "\n";
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