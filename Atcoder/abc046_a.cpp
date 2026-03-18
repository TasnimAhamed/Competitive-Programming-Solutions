#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int a, b, c; cin >> a >> b >> c;

    if (a == b and b == c) {
    	cout << 1 << "\n";
    }
    else if (a == b or b == c or a == c) {
    	cout << 2 << "\n";
    }
    else {
    	cout << 3 << "\n";
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