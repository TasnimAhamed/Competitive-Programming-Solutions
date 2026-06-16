#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;

    vector<int> chk(k, 0);
    for (int i = 0; i < n; i++) {
    	if (s[i] == '1') {
    		if (chk[i % k] == 0) {
    			chk[i % k] = 1;
    		}
    		else {
    			chk[i % k] = 0;
    		}
    	}
    }

    for (auto x : chk) {
    	if (x) {
    		cout << "NO\n";
    		return;
    	}
    }

    cout << "YES\n";

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