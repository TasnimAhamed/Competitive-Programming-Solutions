#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    set<int> st;
    int mex = 0;
    for (int i = 0; i < n; i++) {
    	if (v[i] < 0) {
    		while (st.find(mex) != st.end()) {
    			++mex;
    		}
    		v[i] = mex - v[i];
    		st.insert(v[i]);
    	}
    	else {
    		while (st.find(mex) != st.end()) {
    			++mex;
    		}
    		v[i] = mex;
    		st.insert(v[i]);
    	}
    } 

    for (auto x : v) {
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