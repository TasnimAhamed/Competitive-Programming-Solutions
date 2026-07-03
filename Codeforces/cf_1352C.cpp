#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;

    auto isCute = [&] (ll mid) {
    	ll div = mid / n;
    	ll not_div = mid - div;

    	return not_div >= k;

    };

    ll lo = 1, hi = 1e18;
    while (lo <= hi) {
    	ll mid = lo + (hi - lo) / 2;

    	if (isCute(mid)) {
    		hi = mid - 1;
    	}
    	else {
    		lo = mid + 1;
    	}
    }

    cout << lo << "\n";

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