#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	ll n; cin >> n;
	ll ans = 1;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			ans *= i;
			while (n % i == 0) {
				n /= i;
			}
		}
	}
	ans *= n;

	cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}