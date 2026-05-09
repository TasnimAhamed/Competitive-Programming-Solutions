#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string a, b; cin >> a >> b;
    
    auto getString = [&] (string s) {
    	stack<char> st;
	    for (auto ch : s) {
		    if (ch != ')') {
		        st.push(ch);
		    } 
		    else {
		        if (st.size() >= 3) {
		            char t = st.top(); 
		            st.pop();
		            char s = st.top(); 
		            st.pop();
		            char f = st.top(); 
		            st.pop();

		            if (f == '(' && s == 'x' && t == 'x') {
		                st.push('x');
		                st.push('x');
		            } 
		            else {
		                st.push(f);
		                st.push(s);
		                st.push(t);
		                st.push(')');
		            }
		        } 
		        else {
		            st.push(')');
		        }
		    }
		}

		string ans = "";
		while (!st.empty()) {
		    ans += st.top();
		    st.pop();
		}
		reverse(ans.begin(), ans.end());
		return ans;
    };

    string ff = getString(a);
    string ss = getString(b);

    if (ff == ss) {
    	cout << "Yes\n";
    }
    else {
    	cout << "No\n";
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