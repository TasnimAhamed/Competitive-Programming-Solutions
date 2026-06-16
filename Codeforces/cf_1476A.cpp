#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    if (n >= k) {
    	cout << 1 + (n % k == 0 ? 0 : 1) << "\n";
    }
    else {
    	cout << (k / n) + (k % n == 0 ? 0 : 1) << "\n";
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