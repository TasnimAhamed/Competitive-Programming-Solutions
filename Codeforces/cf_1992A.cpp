#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int a, b, c; cin >> a >> b >> c;
    ll mx = 0;
    for (int i = 0; i <= 5; i++) {
    	for (int j = 0; j <= 5 - i; j++) {
    		ll ans = (a + i) * (b + j) * (c + 5 - (i + j));
    		mx = max(mx, ans);
    	}
    }
    cout << mx << "\n";
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