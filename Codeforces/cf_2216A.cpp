#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> b(k);
    for (auto &x : b) {
    	cin >> x;
    }
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	a.push_back({x, i + 1});
    }
    sort(a.rbegin(), a.rend());
    vector<int> ans;
    for (int i = 0; i < n; i++) {
    	int need = k + 1 - a[i].first;
    	while (need > 0) {
    		ans.push_back(a[i].second);
    		need--;
    	}
    }
    cout << ans.size() << "\n";
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