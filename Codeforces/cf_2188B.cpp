#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    vector<int> ok(n, 0);

    int ans = 0;
    for (int i = 0; i < n; i++) {
    	if (s[i] == '1') {
    		++ans;
    		if (i > 0) {
    			ok[i - 1] = 1;
    		}
    		ok[i] = 1;
    		if (i < n - 1) {
    			ok[i + 1] = 1;
    		}
    	}
    }

    int cnt = 0;
    for (int i  = 0; i < n; i++) {
    	if (!ok[i]) {
    		++cnt;
    	}
    	else {
    		ans += (cnt + 2) / 3;
    		cnt = 0;
    	}
    }
    ans += (cnt + 2) / 3;

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