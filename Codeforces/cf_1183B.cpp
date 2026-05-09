#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for (auto& x : v) {
    	cin >> x;
    }
    sort(v.begin(), v.end());
    int st = v[0] + k;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
    	if ((v[i] + k) >= st and (v[i] - k) <= st) {
    		++cnt;
    	}
    }

    if (cnt == n) {
    	cout << st << "\n";
    }
    else {
    	cout << -1 << "\n";
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