#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    set<int> st;
    for (int i = 1; i * i <= n; i++) {
    	st.insert(i);
    	st.insert(n / i);
    }
    st.insert(0);
    
    cout << st.size() << "\n";
    for (auto x : st) {
    	cout << x << ' ';
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