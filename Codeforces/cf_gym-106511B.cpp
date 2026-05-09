#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;

    int sx_cnt = 0, svn_cnt = 0;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	if (x == 6) {
    		++sx_cnt;
    	}
    	else if (x == 7) {
    		++svn_cnt;
    	}
    }

    if (!sx_cnt or !svn_cnt) {
    	cout << 0 << "\n";
    	return;
    }

    int mx = max(sx_cnt, svn_cnt);
    int mn = min(sx_cnt, svn_cnt);
    mx = min(mn + 1, mx);

    cout << mx + mn - 1 << "\n";

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