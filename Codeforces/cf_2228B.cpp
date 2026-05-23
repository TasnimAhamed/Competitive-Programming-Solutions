#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, x1, x2, k;
	cin >> n >> x1 >> x2 >> k;

	ll dis = abs(x1 - x2);
	dis = min(dis, n - dis);
	// ll mx = n / 2;

	ll ans = dis;
	if (n > 3) {
		ans += k;
	}

	cout << ans << "\n";
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