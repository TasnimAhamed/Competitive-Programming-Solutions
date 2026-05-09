#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> v(n);
    set<int> st;
    for (auto &x : v) {
      cin >> x;
      st.insert(x);
    }
  
    if (st.size() < n) {
      cout << "No\n";
    }
    else {
      cout << "Yes\n";
    }
    
    if (st.size() == m) {
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
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}