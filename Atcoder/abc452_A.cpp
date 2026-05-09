#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int m, d;
    cin >> m >> d;

    if ((m == 1 && d == 7) ||
        (m == 3 && d == 3) ||
        (m == 5 && d == 5) ||
        (m == 7 && d == 7) ||
        (m == 9 && d == 9)) {
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
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}