#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(n);

    for (auto &x : v) {
    	cin >> x;
    }
    if (k > n) {
    	cout << -1 << "\n";
    	return;
    }
    sort(v.begin(), v.end());

    int idx = n - k;

    cout << v[idx] << " " << v[idx] << "\n";
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