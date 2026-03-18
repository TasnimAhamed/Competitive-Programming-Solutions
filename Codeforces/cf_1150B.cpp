#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;

    vector<string> s(n);
    for (auto &x : s) {
    	cin >> x;
    }

    for (int i = 0; i < n; i++) {
    	for (int j = 0; j < n; j++) {
    		if (s[i][j] == '.') {
    			s[i][j] = '#';
    			
    			if (i + 1 < n and j - 1 >= 0 and s[i + 1][j - 1] == '.') {
    				s[i + 1][j - 1] = '#';
    			}
    			else {
    				cout << "NO\n";
    				return;
    			}

    			if (i + 1 < n and s[i + 1 ][j] == '.') {
    				s[i + 1][j] = '#';
    			}
    			else {
    				cout << "NO\n";
    				return;
    			}

    			if (i + 1 < n and j + 1 < n and s[i + 1 ][j + 1] == '.') {
    				s[i + 1][j + 1] = '#';
    			}
    			else {
    				cout << "NO\n";
    				return;
    			}

    			if (i + 2 < n and s[i + 2][j] == '.') {
    				s[i + 2][j] = '#';
    			}
    			else {
    				cout << "NO\n";
    				return;
    			}

    		}
    	}
    }

    cout << "YES\n";
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