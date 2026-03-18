#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    sort(v.begin(), v.end());
    int mx = v[n - 1];
    int mn = v[0];
    int smx = v[n - 2];
    int smn = v[1];
    cout << min(smx - mn, mx - smn) << "\n";
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