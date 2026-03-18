#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int l, r, d, u; cin >> l >> r >> d >> u;

    if (l == r and r == d and d == u) {
    	cout << "Yes\n";
    }
    else {
    	cout << "No\n";
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