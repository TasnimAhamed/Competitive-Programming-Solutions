#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<ll> v(n + 1);
    for (int i = 1; i <= n; i++) {
    	cin >> v[i];
    }
    vector<array<ll, 2>> ans;
    for (int i = 1; i <= n; i++) {
    	int lg = ceil(log2(v[i]));
    	ll nxt = (1LL << lg);
    	ll diff = nxt - v[i];

    	if (diff > 0) {
    		ans.push_back({i, diff});
    	}
    }
    cout << ans.size() << "\n";
    for (auto [idx, val] : ans) {
    	cout << idx << " " << val << "\n";
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