#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<ll> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    
    for (int i = 0; i < n - 1; i++) {
    	v[i + 1] += max(0LL, v[i] - i);
    	v[i] = min((ll)i, v[i]);
    }

    for (int i = 1; i < n; i++) {
    	if (v[i] <= v[i - 1]) {
    		cout << "NO\n";
    		return;
    	}
    }

    cout << "YES\n";
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