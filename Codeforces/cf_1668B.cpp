#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m; cin >> n >> m;
    vector<ll> v(n);
    for (auto& x : v) {
    	cin >> x;
    }
    if (n > m) {
    	cout << "NO\n";
    	return;
    }

    sort(v.begin(), v.end());
    
    ll curr_pos = 1, right = v[0];
    for (int i = 1; i < n; i++) {
    	ll nxt_pos = curr_pos + right + (v[i] - right) + 1;
    	curr_pos = nxt_pos;
    	right = v[i];
    	// cout << curr_pos << "\n";
    }
    ll last_pos = m - v[n - 1];
    if (curr_pos <= last_pos) {
    	cout << "YES\n";
    }
    else {
    	cout << "NO\n";
    }

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