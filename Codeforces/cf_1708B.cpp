#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, l, r; cin >> n >> l >> r;

    
    vector<int> ans(n + 1, -1);
    for (int i = 1; i <= n; i++) {
        int nxt = ((l + i - 1) / i ) * i;
        if (nxt <= r) {
            ans[i] = nxt;
        } 
        else {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
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