#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    stack<char> st;
    for (auto ch : s) {
    	if (st.empty()) {
    		st.push(ch);
    	}
    	else if(ch == '0' and st.top() == '1') {
    		st.pop();
    	}
    	else if (ch == '1' and st.top() == '0') {
    		st.pop();
    	}
    	else 
    	{
    		st.push(ch);
    	}
    }

    cout << st.size() << '\n';
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