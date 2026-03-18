#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    stack<char> st;

    for(auto ch : s) {
        if(!st.empty() and st.top() == ch) {
            st.pop();
        } 
        else {
            st.push(ch);
        }
    }

    if(st.empty())
        cout << "YES\n";
    else
        cout << "NO\n";
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