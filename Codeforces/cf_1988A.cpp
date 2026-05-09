#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;

    if (n == 1) {
    	cout << 0 << "\n";
    }
    else if (k >= n ){
    	cout << 1 << "\n";
    }
    else {
    	--n;
    	--k;
    	cout << (n / k) + min(1, n % k) << "\n";
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