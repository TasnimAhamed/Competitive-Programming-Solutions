#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, q; cin >> n >> q;
    vector<ll> v(n + 1, 0);
    for (int i = 1; i <= n; i++) {
    	cin >> v[i];
    }
    sort(v.begin() + 1, v.end(), greater<ll> ());
    for (int i = 1; i <= n; i++) {
    	v[i] += v[i - 1];
    }
    // for (auto x : v) {
    // 	cout << x << " ";
    // }
    // cout << "\n";
    while (q--) {
    	int x, y; 
    	cin >> x >> y;
    	
 		ll free = v[x] - v[x - y];
    	cout << free << "\n";
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