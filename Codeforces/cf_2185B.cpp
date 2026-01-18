#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int mx = -1;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	mx = max(mx, x);
    }
    cout << mx * n << "\n";

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