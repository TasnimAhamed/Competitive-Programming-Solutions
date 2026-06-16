#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;

    if (n & 1) {
        cout << "1 1 2 1 2 3 1 3 2 2 3 3 ";
        for (int i = 4; i < n; i += 2) {
            cout << i << " " << i + 1 << " " << i + 1 << " " << i << " ";
            cout << i + 1 << " " << i << " " << i << " " << i + 1 << " ";
        }
        cout << "\n";
    }
    else {
        for (int i = 1; i <= n; i += 2) {
            cout << i << " " << i + 1 << " " << i + 1 << " " << i << " ";
            cout << i + 1 << " " << i << " " << i << " " << i + 1 << " ";
        }
        cout << "\n";
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