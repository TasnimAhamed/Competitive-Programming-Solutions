#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m; cin >> n >> m;
    if (n == m) {
    	cout << 0 << "\n";
    }
    else if (m <= 1) {
    	cout << 1 << "\n";
    }
    else {
    	if (m > (n / 2)) {
    		cout << n - m << "\n";
    	}
    	else {
    		cout << m << "\n";
    	}
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