#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m; cin >> n >> m;
    vector<string> v(n);
    for (auto &s : v) {
    	cin >> s;
    } 
    int row = -1, col = -1, mx = 0;

    for (int i = 0; i < n; i++) {
    	int cnt = 0, st = -1;
    	for (int j = 0; j < m; j++) {
    		if (v[i][j] == '#') {
    			++cnt;
    			if (st == -1) {
    				st = j;
    			}
    		}
    	}
    	if (cnt and cnt > mx) {
    		mx = cnt;
    		row = i + 1;
    		col = st + mx / 2 + 1;
    	}
    }

    cout << row << " " << col << "\n";
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