#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    
    if (x1 != x2 and y1 != y2 and abs(x2 - x1) != abs(y2 - y1)) {
    	cout << -1 << "\n";
    }
    else if (x1 == x2) {
    	cout << x1 + abs(y2 - y1) << " " << y1 << " " << x2 + abs(y2 - y1) << " " << y2 << "\n";
    }
    else if (y1 == y2) {
    	cout << x1  << " " << y1 + abs(x2 - x1) << " " << x2 << " " << y2 + abs(x2 - x1) << "\n";
    }
    else {
    	cout << x1 << " " << y2 << " " << x2 << " " << y1 << "\n";
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