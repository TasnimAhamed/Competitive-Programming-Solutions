#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    vector<int> ans(n);
    ans[0] = v[0];
    int mx = v[0];
    for (int i = 1; i < n; i++) {
    	ans[i] = mx + v[i];
    	mx = max(ans[i], mx);
    }

    for (auto x : ans) {
    	cout << x << " ";
    }
    cout << "\n";
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