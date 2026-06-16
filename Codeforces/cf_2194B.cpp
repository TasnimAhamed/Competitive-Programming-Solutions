#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, x, y; cin >> n >> x >> y;
    vector<int> v(n);
    ll all = 0;
    for (int i = 0; i < n; i++) {
    	cin >> v[i];
    	all += v[i] / x;
    }
    
    ll mx = 0;
    for (auto val : v) {
    	ll res = 1ll * (all - (val / x)) * y + val;  
    	mx = max(mx, res);
    }

    cout << mx << "\n";
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