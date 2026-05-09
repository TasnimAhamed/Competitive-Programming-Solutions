#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) {
    	for (int j = 1; j <= m; j++) {
    		if (i == 1 or j == 1 or i == n or j == m) {
    			cout << "#";
    		}
    		else {
    			cout << ".";
    		}
    	}
    	cout << "\n";
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