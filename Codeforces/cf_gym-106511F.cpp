#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m; cin >> n >> m;

    if (n == 1 and m == 1) {
    	cout << 1 << "\n";
    }
    else if (n == 1 or m == 1) {
    	cout << 2 << "\n";
    }
    else if (n == m) {
    	cout << 8 << "\n";
    }
    else {
    	cout << 4 << "\n";
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