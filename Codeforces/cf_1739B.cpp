#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;

    vector<int> d(n);
    for (auto &x : d) {
    	cin >> x;
    }
    vector<int> ans(n);
    ans[0] = d[0];
    for (int i = 1; i < n; i++){
    	int nxt = ans[i - 1] + d[i];
    	int nxt_can_be = ans[i - 1] - d[i];
    	if (nxt_can_be == nxt) {
    		ans[i] = nxt;
    	}
    	else if (nxt_can_be >= 0) {
    		cout << -1 << "\n";
    		return;
    	}
    	else {
    		ans[i] = nxt;
    	}
    }

    for (auto x : ans) {
    	cout << x << " ";
    }
    cout << "\n";

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