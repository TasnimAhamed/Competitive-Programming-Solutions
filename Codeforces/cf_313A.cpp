#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    if (n > 0) {
    	cout << n << "\n";
    }
    else {
    	int tmp = n / 10;
    	int rem = n % 10;
    	n /= 100;
    	n = n * 10 + rem;

    	cout << max(tmp, n) << "\n";
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