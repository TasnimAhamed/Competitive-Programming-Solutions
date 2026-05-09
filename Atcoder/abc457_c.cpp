#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, k; cin >> n >> k;
    
    vector<vector<ll>> v;
    vector<int> len(n);
    sfor (int i = 0; i < n; i++) {
    	cin >> len[i];
    	vector<ll> vv;
    	for (int j = 0; j < len[i]; j++) {
    		ll x; cin >> x;
    		vv.push_back(x);
    	}
    	v.push_back(vv);
    }

    vector<ll> c(n);
    for (auto& x : c) {
    	cin >> x;
    }
    ll cnt = 0;
    for (int i = 0; i < n; i++) {
    	ll curr = len[i] * c[i];
    	if (k > curr) {
    		k -= curr;
    	}
    	else {
    		int rem = k % len[i];
    		if (rem == 0) {
    			rem = len[i];
    		}
    		--rem;

    		cout << v[i][rem] << "\n";
    		return;
    	}
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