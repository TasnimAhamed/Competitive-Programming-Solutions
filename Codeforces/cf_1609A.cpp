#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<ll> v(n);
    int cnt = 0;
    for (auto &x : v) {
    	cin >> x;
    	while (x % 2 == 0){
    		x /= 2;
    		++cnt;
    	}
    }
    sort(v.begin(), v.end());
    
    v[n - 1] *= (1LL << cnt);

    ll ans = accumulate(v.begin(), v.end(), 0LL);

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