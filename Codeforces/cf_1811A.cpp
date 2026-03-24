#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, c; cin >> n >> c;
    string s; cin >> s;
    if (c == 0) {
    	cout << s << 0 << "\n";
    	return;
    }
    for (int i = 0; i < n; i++) {
    	if((s[i] - '0') <= c) {
    		cout << c << s.substr(i) << "\n";
    		return;
    	}
    	else {
    		cout << s[i];
    		if (i == n - 1) {
    			cout << c << "\n";
    		}
    	}
    }
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