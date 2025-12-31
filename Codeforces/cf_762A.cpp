#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, k;
    cin >> n >> k;
    
    vector<ll> div;
    for (ll i = 1; i * i <= n; i++) {
        // cout << i << "\n";
    	if(n % i == 0) {
    		div.push_back(i);
    		if(n / i != i) {
    			div.push_back(n / i);
    		}
    	}
    }
    sort(div.begin(), div.end());
    int sz = (int) div.size();

    if(k > sz) {
    	cout << -1 << "\n";
    }
    else{
    	cout << div[k - 1] << "\n";
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