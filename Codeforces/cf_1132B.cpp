#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    ll sum = 0;
    for (auto &x : v) {
    	cin >> x;
    	sum += x;
    }
    sort(v.rbegin(), v.rend());
    int q; cin >> q;
    while (q--) {
    	int x; cin >> x;
    	cout << sum - v[x - 1] << "\n";
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