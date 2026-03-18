#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m, d; cin >> n >> m >> d;
    if (m > d) {
    	cout << n << "\n";
    	return;
    }
    int mn = d / m + 1;
    int ans = (n + mn - 1) / mn;

    cout << ans << "\n"; 
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