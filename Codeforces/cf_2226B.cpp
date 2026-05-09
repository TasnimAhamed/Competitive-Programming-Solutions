#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;

    vector<int> per(n);
    for (int &x : per) {
    	cin >> x;
    }

    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        int x = per[i], y = per[i + 1];
        int gcd = __gcd(x, y);

        if (abs(x - y) == gcd) {
            ++ans;
        }
    }
    

    cout << ans << '\n';
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