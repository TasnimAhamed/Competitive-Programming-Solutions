#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    vector<ll> v(n);
    for (auto &x : v) {
    	cin >> x;
    }

    for (int i = 1; i < n; i++) {
    	v[i] += v[i - 1];
    }


    auto isOK = [&] (int mid) ->  bool {
    	for (int i = mid - 1; i < n; i++) {
    		ll ff = v[i] - ((i - mid) < 0 ? 0 : v[i - mid]);
    		if(ff <= k) {
    			return true;
    		}
    	}
    	return false;
    };

  	int  lo = 1, hi = n;
  	while(lo <= hi) {
  		int  mid = lo + (hi - lo) / 2;
  		if(isOK(mid)) {
  			lo  = mid + 1;
  		}
  		else{
  			hi = mid - 1;
  		}
  	}

  	cout << hi << "\n";


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