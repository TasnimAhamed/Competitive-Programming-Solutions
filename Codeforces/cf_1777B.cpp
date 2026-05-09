#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

void solve() {
	int n; cin >> n;

	ll ans = (1LL % MOD * n % MOD * (n - 1) % MOD) % MOD;
	cerr << ans << "\n";
	
	for (int i = 1; i <= n; i++) {
		ans = (ans % MOD * i % MOD) % MOD;
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