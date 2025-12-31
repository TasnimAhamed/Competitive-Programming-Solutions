#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {

	int n, k; cin >> n >> k;
	vector<int> v(n);
	for (auto &x : v) {
		cin >> x;
	}
	if(k == 0) {
		int gcd = 0;
		for (auto x : v) {
			gcd = __gcd(gcd, x);
		}
		cout << gcd << "\n";
	}
	else if(k == (n - 1)) {
		int mx = -1;
		for (auto x : v) {
			mx = max(mx, x);
		}
		cout << mx << "\n";
	}
	else{

		vector<int> cnt(n + 1, 0);
		for (auto x : v) {
			cnt[x]++;
		}
		vector<int> pref(n + 1, 0);
		for (int i = 1; i <= n; i++) {
			pref[i] = pref[i - 1] + cnt[i];
		}
		
		ll ans = 1;
		for (int i = 1; i <= n; i++) {

			ll ff = min(n, 3 * i);
			ll total = pref[ff];
			ll ss = cnt[i];
			if(2 * i <= n) {
				ss += cnt[2 * i];
			}	

			ll need = total - ss;
			if(need <= k) {
				ans = i;
			}
		}
		cout << ans << "\n";

	}
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}
