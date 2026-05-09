#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto& x : v) {
    	cin >> x;
    }

    for (int i = 0; i < n / 2; i++) {
    	if (i % 2 == 0) {
    		swap(v[i], v[n - i - 1]);
    	}
    }

    for (auto x : v) {
    	cout << x << " ";
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