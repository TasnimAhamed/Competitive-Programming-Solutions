#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n - 1);
    for (auto &x : v) {
    	cin >> x;
    }
    vector<int> ans(n);
    ans[0] = v[0];
    ans[n - 1] = v[n - 2];
    for (int i = 1; i < n - 1; i++) {
    	ans[i] = min(v[i], v[i - 1]);
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
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}