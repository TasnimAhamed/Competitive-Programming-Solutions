#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, l; cin >> n >> l;

    vector<int> v;    
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	v.push_back(x);
    }
    sort(v.begin(), v.end());

    double mx = -1;

    for (int i = 1; i < v.size(); i++) {
    	int d = v[i] - v[i - 1];
    	mx = max(mx, d / 2.0);
    }

    mx = max({mx, 1.0 * v[0], 1.0 * l - v[n - 1]});
    cout << fixed << setprecision(6) << mx << "\n";
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