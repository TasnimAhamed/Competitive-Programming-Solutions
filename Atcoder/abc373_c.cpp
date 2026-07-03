#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int mx1 = INT_MIN, mx2 = INT_MIN;
    
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	mx1 = max(mx1, x);
    }

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        mx2 = max(mx2, x);
    }

    // cout << mx1 << " " << mx2 << "\n";
    cout << mx1 + mx2 << "\n";
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