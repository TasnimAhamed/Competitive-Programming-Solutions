#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int x = 0, y = 0, cnt = 0;

	for (int i = 0; i < n - 1; i++) {
		char ch = s[i];

	    if (ch == 'U') {
	    	y++;
	    }
	    else {
	    	x++;
	    }

	    if (x == y) {
	        if (s[i + 1] == ch) {
	        	cnt++;
	        }
	    }
	}

	cout << cnt << "\n";
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