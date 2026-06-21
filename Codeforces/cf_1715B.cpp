#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, k, b, s; cin >> n >> k >> b >> s;
    ll mn_sum = b * k;
    ll mx_sum = b * k + ((k - 1) * n);

    if (s < mn_sum or s > mx_sum) {
    	cout << -1 << "\n";
    	return;
    }

    vector<ll> ans(n, 0);
    ans[0] = b * k;
    s -= (b * k);
    for (int i = 0; i < n; i++) {
    	ll mn = min(s, k - 1);
    	ans[i] += mn;
    	s -= mn;
    }
    
    for (auto x : ans) {
    	cout << x << " ";
    }
    cout << "\n";
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