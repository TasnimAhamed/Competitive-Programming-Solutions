#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int a, b; cin >> a >> b;

    if (a == b) {
    	cout << 1 << "\n";
    	cout << a << "\n";
    }
    else {
    	cout << 3 << "\n";
        cout << b << " " << b << " " << 3 * a - 2 * b << "\n";
        // if (a <= 0) {
        //     if (b < 0) {
        //         cout << 3 * a + 2 * b << " " << b << " " << -3 * b << "\n";
        //     }
        //     else {
        //         cout << a * 3 - 2 * b << " " << b << " " << b << "\n";
        //     }
        // }
        // else {
        //     if (b < 0) {
        //         cout << b << " " << b << " " << 3 * a - 2 * b << "\n";
        //     }
        //     else {
        //         cout << -3 * b << " " << b << " " << 3 * a + 2 * b << "\n";
        //     }
        // }
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