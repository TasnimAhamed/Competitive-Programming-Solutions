#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll get_pow(int x, int n) {
	ll ans = 1;
	for (int i = 1; i <= n; i++) {
		ans *= x;
	}
	return ans;
}

void solve() {
    int x, n; cin >> x >> n;

    ll ans = 0;
    for(int i = 2; i <= n; i += 2){
    	ans += get_pow(x, i);
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