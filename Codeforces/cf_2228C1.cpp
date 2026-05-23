#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MX = 1e17;

int n;
ll a;

vector<int> d;
ll ans = -1;

void dfs(ll curr, int dd, int mx_len) {
	ans = min(ans, llabs(a - curr));

	// cout << curr << " " << ans << "\n";

    if (dd >= mx_len) {
    	return;
    }

    for (auto x : d) {
    	if (curr == 0 && x == 0 && dd > 0) {
    		continue;
    	}
        dfs(curr * 10LL + x, dd + 1, mx_len);
    }
}

void solve() {
    // ll a, n;
    cin >> a >> n;

    d.resize(n);
    for (int i = 0; i < n; i++){
    	cin >> d[i];
    }

    ans = LLONG_MAX;
    if (d[0] == 0) {
    	ans = a;
    }
    else {
    	ans = llabs(a - d[0]);
    }

    // cout << ans << "\n";
    int mx_len = to_string(a).size() + 1;

    for (auto x : d) {
	    dfs(x, 1, mx_len);
	}

    cout << ans << "\n";
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