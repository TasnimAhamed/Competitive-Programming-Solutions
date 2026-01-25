#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;  cin >> n;

    vector<ll> a(n), b(n);
    for (auto &x : a) {
    	cin >> x;
    }
    for (auto &x : b) {
    	cin >> x;
    }
    
    vector<ll> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
    	pref[i] = pref[i - 1] + b[i - 1];
    }

    // for (auto x : pref) {
    // 	cout << x << " ";
    // }
    // cout << "\n";

    sort(a.rbegin(), a.rend());

    ll ans = LLONG_MIN;
    for (int i = 1; i <= n; i++) {
        ll x = a[i - 1]; 
        int lvl = upper_bound(pref.begin(), pref.end(), i) - pref.begin() - 1;
        ans = max(ans, x * lvl);
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