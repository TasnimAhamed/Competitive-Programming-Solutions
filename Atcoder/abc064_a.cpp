#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int r, g, b; cin >> r >> g >> b;
    int num = r * 100 + g *  10 + b;

    if (num % 4 == 0) {
    	cout << "YES\n";
    }
    else {
    	cout << "NO\n";
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