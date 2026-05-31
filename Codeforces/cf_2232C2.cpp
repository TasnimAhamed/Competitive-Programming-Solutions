#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, x, s; cin >> n >> x >> s;
    string fr; cin >> fr;

    int ans = 0, empty = 0, ambi = 0;
    for (auto ch : fr) {
    	if (ch == 'I') {
    		if (x) {
    			--x;
    			empty += s - 1;
    			++ans;
    		}
    	}
    	else if (ch == 'E') {
    		if (empty) {
    			--empty;
    			++ans;
    		}
    		else if (ambi and x) {
    			--ambi;
    			--x;
    			empty += s - 1;
    			++ans;
    		}
    	}
    	else {
    		if (empty) {
    			--empty;
    			++ambi;
    			++ans;
    		}
    		else {
    			if (x) {
    				--x;
    				++ans;
    				empty += s - 1;
    			}
    		}
    	}
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