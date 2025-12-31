#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll kadane(vector<ll>& v) {
    ll cur = v[0], best = v[0];
    for (int i = 1; i < v.size(); i++) {
        cur = max(v[i], cur + v[i]);
        best = max(best, cur);
    }
    return best;
}


void solve() {
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for (auto &x : a) {
    	cin >> x;
    }
    for (auto &x : b) {
    	cin >> x;
    }
    
    if (k % 2 == 0) {
		ll ans = kadane(a);
        cout << ans << "\n";
        return;
    }
    
    vector<ll> pref(n);
    ll cur = 0;
    for (int i = 0; i < n; i++) {
        cur = max(a[i], cur + a[i]);
        pref[i] = cur;
    }

    vector<ll> suff(n);
    cur = 0;
    for (int i = n - 1; i >= 0; i--) {
        cur = max(a[i], cur + a[i]);
        suff[i] = cur;
    }

    ll ans = LLONG_MIN;

    for (int i = 0; i < n; i++) {
        ll left = (i == 0 ? 0 : max(0LL, pref[i-1]));
        ll right = (i == n - 1 ? 0 : max(0LL, suff[i+1]));

        ans = max({ans, left + right + a[i] + b[i], left + right + a[i] - b[i]});
    }

    cout << ans << "\n";

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