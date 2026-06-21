#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;

    if (n == 1) {
    	cout << 1 << "\n";
    	cout << 1 << "\n";
    	return;
    }

    if (k == 1 or k == n) {
    	cout << -1 << "\n";
    	return;
    }

    if (k <= (n + 1) / 2) {
    	cout << (k - 1) * 2 + 1 << "\n";
    	for (int i = 1; i <= (k - 1) * 2; i++) {
    		cout << i << " ";
    	}
    	cout << (k - 1) * 2 + 1 << "\n";
    }
    else {
    	int st = n - (n - k) * 2;
    	cout << (n - k) * 2 + 1 << "\n";
    	cout << 1 << " ";
    	for (int i = st + 1; i <= n; i++) {
    		cout << i << " ";
    	}
    	cout << "\n";
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