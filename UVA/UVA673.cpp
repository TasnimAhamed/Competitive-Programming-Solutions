#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s;
    getline(cin, s);

    stack<char> st;

    for (auto ch : s) {
    	if (ch == '(' or ch == '[') {
    		st.push(ch);
    	}
    	else {
    		if (st.empty()) {
    			cout << "No\n";
    			return;
    		}
    		else {
    			char top = st.top();

    			if ((top == '(' and ch == ')') or (top == '[' and ch == ']')) {
    				st.pop();
    			}
    			else {
    				cout << "No\n";
    				return;
    			}
    		}
    	}
    }

    if (st.empty()) {
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
    cin.ignore();
    while (t--) {
        solve();
    }

    return 0;
}