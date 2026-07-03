#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    if (n <= 3) {
    	cout << -1 << "\n";
    	return;
    }

    for (int i = n; i > 4; i--) {
    	if (i % 2 == 0) {
    		cout << i << " ";
    	}
    }
    cout << "3 1 4 2 ";

    for (int i = 5; i <= n; i++) {
    	if (i & 1) {
    		cout << i << " ";
    	}
    }

    cout << "\n";

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