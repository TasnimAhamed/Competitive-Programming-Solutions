#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(2*n);
    for (auto& x : v) {
    	cin >> x;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
    	if (v[i + n] < (v[i] + k)) {
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