#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    string cpy = s;
    reverse(cpy.begin(), cpy.end());
    if (s == cpy) {
    	if (n & 1) {
    		string ans(n + 1, '1');
    		cout << ans << "\n";
    	}
    	else {
    		string ans = "";
    		for (int i = 0; i <= n; i++) {
    			if (i & 1) {
    				ans += "0";
    			}
    			else {
    				ans += "1";
    			}
    		}
    		cout << ans << "\n";
    	}
    }
    else {
    	int mid = (n & 1) ? 1 : 0;
    	int match = 0, mismatch = 0;
    	for (int i = 0; i < n / 2; i++) {
    		if (s[i] == s[n - i - 1]) {
    			match += 2;
    		}
    		else {
    			mismatch++;
    		}
    	}
    	string ans = "0";
	    for (int i = 1; i <= n; i++) {
	    	if (i < mismatch) {
	    		ans += "0";
	    	}
	    	else {
	    		int need = i - mismatch;
    			if (need & 1) {
    				if (mid and (need - 1) <= match) {
    					ans += "1";
    				}
    				else {
    					ans += "0";
    				}
    			}
    			else {
    				if (need <= match) {
    					ans += "1";
    				}
    				else {
    					ans += "0";
    				}
    			}
	    	}
	    }

	    cout << ans << "\n";
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