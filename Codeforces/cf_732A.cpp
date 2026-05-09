#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, r; cin >> n >> r;
    for (int i = 1; i <= 10; i++) {
    	cout << (n * i) << " " << (n * i % 10) << "\n";
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