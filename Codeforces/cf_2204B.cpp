#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    // multiset<int, greater<int>> st;
    for (auto &x : v) {
    	cin >> x;
    	// st.insert(x);
    }

    int cnt = 0;
    int curr_mx = 0;

    for (int i = 0; i < n; ++i) {
        if (v[i] >= curr_mx) {
            curr_mx = v[i];
            cnt++;
        }
    }

    cout << cnt << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}