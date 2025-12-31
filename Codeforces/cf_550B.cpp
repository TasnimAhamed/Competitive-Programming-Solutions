#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, l, r, x; cin >> n >> l >> r >> x;
    int arr[n];
    for (int &x : arr) {
    	cin >> x;
    }
    int ans = 0;
    for (int mask = 0; mask < (1 << n); mask++) {
    	ll sum = 0;
    	int cnt = 0, mx = -1, mn = INT_MAX;
    	for (int  i = 0; i < n; i++) {
    		if ((mask >> i) & 1) {
    			sum += arr[i];
    			mx = max(mx, arr[i]);
    			mn = min(mn, arr[i]);
    			++cnt;
    		}
    	}
    	if (cnt >= 2 and (sum >= l and sum <= r)  and (mx - mn) >= x) {
    		++ans;
    	}
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;

}