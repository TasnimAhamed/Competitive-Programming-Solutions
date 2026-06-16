#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<array<int, 2>> v;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	v.push_back({x, i + 1});
    }
    sort(v.rbegin(), v.rend());
    int st = 0;
    ll cost = 0;
    for (auto [x, idx] : v) {
    	cost += (x * st + 1);
    	// cout << x << " " << st << " " << cost << "\n";
    	++st;
    }

    cout << cost << "\n";
    for (auto [x, idx] : v) {
    	cout << idx << " ";
    }
    cout << "\n";
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