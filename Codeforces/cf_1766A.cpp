#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;

    if (n <= 10) {
        cout << n << "\n";
    }
    else {
        int nn = log10(n);
        int pw = pow(10, nn);
        int ans = (nn * 9+1) + ((n - pw)/pw);
        cout << ans << "\n";
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