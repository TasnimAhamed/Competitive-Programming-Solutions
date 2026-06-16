#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    
    int mn = INT_MAX, smn = INT_MAX;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
    	int m; cin >> m;
    	vector<int> v(m);
    	for (auto &x : v) {
    		cin >> x;
    	}
    	sort(v.begin(), v.end());
    	sum += v[1];
    	smn = min(smn, v[1]);
    	mn = min(mn, v[0]);
    }
    cout << sum - smn + mn << "\n";
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