#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int q; cin >> q;
    multiset<int> st;
    while (q--) {
    	int type, h; cin >> type >> h;	    
	    if (type == 1) {
	    	st.insert(h);
	    }
	    else {
	    	st.erase(st.begin(), st.upper_bound(h));
	    }
	    cout << st.size() << "\n";
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