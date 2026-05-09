#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, a, b; cin >> n >> a >> b;
    vector<int> ans(n + 1, 0);
    for (int i = 0; i < a; i++) {
    	int x; cin >> x;
    	ans[x] = 1;
    }
    for (int i = 0; i < b; i++) {
    	int x; cin >> x;
    	if (!ans[x]) {
    		ans[x] = 2;
    	}
    }

    for (int i = 1; i <= n; i++) {
    	cout << ans[i] << (i == n ? "\n" : " ");
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