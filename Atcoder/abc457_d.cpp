#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using i128 = __int128_t;

void solve() {
    int n; cin >> n;
    ll k; cin >> k;
    vector<ll> v(n + 1);
    for (int i = 1; i <= n; i++) {
    	cin >> v[i];
    }

    auto ok = [&] (i128 x) {
    	i128 need = 0;
    	for (int i = 1; i <= n; i++) {
    		if (x > v[i]) {
    			i128 diff = x - v[i];
    			need += (diff + i - 1) / i;
    		}
    		if (need > (i128)k) {
	    		return false;
	    	}
    	}

    	return need <= k;
    };

    __int128 lo = 0, hi = (i128) 1e24;
    while (hi - lo > 1) {
    	i128 mid =  lo + (hi - lo) / 2;

    	if (ok(mid)) {
    		lo = mid;
    	}
    	else {
    		hi = mid;
    	}
    }

    auto print_i128 = [&] (i128 x) {
    	if (x == 0) {
    		cout << 0 << "\n";
    		return;
    	}

    	string ans = "";
    	while (x > 0) {
    		ans += char('0' + x % 10);
    		x /= 10;
    	}

    	reverse(ans.begin(), ans.end());
    	cout << ans << "\n";
    };


    print_i128(lo);

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