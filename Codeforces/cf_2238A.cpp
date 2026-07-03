#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, c; cin >> n >> c;
    vector<int> a(n), b(n);
    for (auto &x : a) {
    	cin >> x;
    }
    for (auto &x : b) {
    	cin >> x;
    }

    int cost_f = 0;
    for (int i = 0; i < n; i++) {
    	if (a[i] >= b[i]) {
    		cost_f += (a[i] - b[i]);
    	}
    	else {
    		cost_f = INT_MAX;
    		break;
    	}
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int cost_s = 0;
    for (int i = 0; i < n; i++) {
    	if (a[i] < b[i]) {
    		cout << -1 << "\n";
    		return;
    	}
    	cost_s += (a[i] - b[i]);
    }

    cout << min(cost_f, cost_s + c) << "\n";

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