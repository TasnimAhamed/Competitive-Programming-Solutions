#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;
    int r = 0, g = 0, b = 0, cnt = 0;
    for (auto ch : s) {
    	if (ch == 'r' or ch == 'g' or ch == 'b') {
    		if (ch == 'r') {
    			++r;
    		}
    		else if (ch == 'g') {
    			++g;
    		}
    		else {
    			++b;
    		}
    	}
    	else {
    		if (ch == 'R' and r) {
    			++cnt;
    		}
    		else if (ch == 'G' and g) {
    			++cnt;
    		}
    		else if (ch == 'B' and b) {
    			++cnt;
    		}
    	}
    }

    cout << (cnt == 3 ? "YES\n" : "NO\n");
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