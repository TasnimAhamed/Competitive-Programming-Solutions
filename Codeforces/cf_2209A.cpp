#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, c, k; cin >> n >> c >> k;
    vector<ll> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    sort(v.begin(), v.end());
    for (auto& x : v) {
    	if (x <= c) {
    		ll use = min(k, c - x);
    		x += use;
    		k -= use;
    		c += x;
    	}
    	else {
    		break;
    	}
    }

    cout << c << "\n";
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