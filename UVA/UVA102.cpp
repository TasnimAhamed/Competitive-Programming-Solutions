#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll b1, g1, c1;
    ll b2, g2, c2;
    ll b3, g3, c3;

    string str[] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};

    while (cin >> b1) {
    	cin >> g1 >> c1;
    	cin >> b2 >> g2 >> c2;
    	cin >> b3 >> g3 >> c3;

    	ll mn = LLONG_MAX;
    	string ans = "";

    	for (auto s : str) {
    		ll mov = 0;

    		if (s[0] != 'B') mov += b1;
    		if (s[0] != 'G') mov += g1;
    		if (s[0] != 'C') mov += c1;
    		

    		if (s[1] != 'B') mov += b2;
    		if (s[1] != 'G') mov += g2;
    		if (s[1] != 'C') mov += c2;


    		if (s[2] != 'B') mov += b3;
    		if (s[2] != 'G') mov += g3;
    		if (s[2] != 'C') mov += c3;

    		if (mov < mn) {
    			mn = mov;
    			ans = s;
    		}
    	}

    	cout << ans << " " << mn << "\n";

    }
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