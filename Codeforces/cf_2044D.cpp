#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
	vector<int> mode(n);
	set<int> st;
	int lim = n;
    for (int i = 0; i < n; i++) {
    	if (st.find(v[i]) == st.end()) {
    		mode[i] = v[i];
    		st.insert(v[i]);
    	}
    	else {
    		while(st.find(lim) != st.end()) {
    			--lim;
    		}
    		mode[i] = lim;
    		st.insert(lim);
    	}
    }

    for (auto x : mode) {
    	cout << x << " ";
    }
    cout << "\n";

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