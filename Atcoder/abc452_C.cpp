#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<array<int, 2>> v(n);
    for (auto& x : v) {
    	cin >> x[0] >> x[1];
    }
    int m; cin >> m;
 
    vector<string> ribs(m);
    for (auto &rib : ribs) {
    	cin >> rib;
    }

    bool exist[11][11][26] = {};

   	for (auto &rib : ribs) {
	    int len = rib.size();
	    for (int i = 0; i < len; i++) {
	        int ch = rib[i] - 'a';
	        exist[len][i + 1][ch] = true;
	    }
	}

	for (auto rib : ribs) {
		if (rib.size() != n) {
		    cout << "No\n";
		    continue;	    
		}

		bool ok = true;

		for (int i = 0; i < n; i++) {
		    char ch = rib[i];
		    int len = v[i][0];
		    int pos = v[i][1];

		    if (!exist[len][pos][ch - 'a']) {
		        ok = false;
		        break;
		    }
		}

		if (ok) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
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