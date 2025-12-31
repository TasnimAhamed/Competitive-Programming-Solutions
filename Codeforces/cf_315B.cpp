#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    vector<ll> v(n), chk(n);

    for (auto &x : v) {
    	cin >> x;
    }
    ll extra = 0;
    for (int i = 0; i < k; i++) {
    	ll x; cin >> x;
    	if(x == 1) {
    		ll p, q; cin >> p >> q;
    		--p;
    		v[p] = q;
    		ll nn = extra + chk[p];
    		chk[p] -= nn;
    	}
    	else {
    		ll p; cin >> p;
    		if(x == 2) {
    			extra += p;
    		}
    		else{
    			--p;
    			cout << v[p] + extra + chk[p] << "\n";
    		}
    	}
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;
}