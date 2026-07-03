#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    stack<char> st;
    for (int i = 0; i < n; i++) {
    	if (st.empty()) {
    		st.push(s[i]);
    	}
    	else {
    		char top = st.top();
    		if (s[i] != top) {
    			st.push(s[i]);
    		}
    	}
    }
    
    string ans = "";
    while (!st.empty()) {
    	ans += st.top();
    	st.pop();
    }
    
    if (ans.size() <= 2) {
    	cout << ans.size() << "\n";
    }
    else {
    	cout << 1 << "\n";
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