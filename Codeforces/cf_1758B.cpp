#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;

    if (n & 1) {
    	for (int i = 0; i < n; i++){
    		cout << n << (i == n - 1 ? "\n" : " ");
    	}
    }
    else {
    	for (int i = 1; i <= n - 2; i++) {
    		cout << 2 << " ";
    	}
    	cout << "1 3\n";
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