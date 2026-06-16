#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	mp[x] = i;
    }
    int ans = INT_MAX, last_vis = INT_MAX;
    for (auto [key, val] : mp) {
    	if (val < last_vis) {
    		last_vis = val;
    		ans = key;
    	}
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}