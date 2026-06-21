#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (auto &x : v) {
    	cin >> x;
    	sum += x;
    }
    if (sum != 0) {
    	cout << "YES\n";
    	cout << 1 << "\n";
    	cout << 1 << " " << n << "\n";
    }
    else {
    	int curr = 0;
    	for (int i = 0; i < n; i++) {
    		curr += v[i];
    		int rem = sum - curr;
    		if (curr != 0 and rem != 0) {
    			cout << "YES\n";
    			cout << 2 << "\n";
    			cout << 1 << " " << i + 1 << "\n";
    			cout << i + 2 << " " << n << "\n";
    			return;
    		}
    	}

    	cout << "NO\n";
    }
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