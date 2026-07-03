#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int a, b, c; cin >> a >> b >> c;
    if (a and !b and !c) {
    	string ans (a + 1, '0');
    	cout << ans << "\n";
    }
    else if (!a and !b and c) {
    	string ans (c + 1, '1');
    	cout << ans << "\n";
    }
    else {
    	if (b & 1) {
    		string ans = "10";
	    	--b;
	    	for (int i = 1; i <= b; i += 2) {
	    		ans += "10";
	    	}

	    	string one(c, '1');
	    	ans = one + ans;

	    	string zero(a, '0');
	    	ans = ans + zero;

	    	cout << ans << "\n";
    	}
    	else {
    		string ans = "10";
	    	--b;
	    	for (int i = 1; i < b; i += 2) {
	    		ans += "10";
	    	}

	    	string zero(a, '0');
	    	ans = ans + zero;

	    	string one(c, '1');
	    	ans = one + ans;

	    	ans += "1";
	    	
	    	cout << ans << "\n";
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