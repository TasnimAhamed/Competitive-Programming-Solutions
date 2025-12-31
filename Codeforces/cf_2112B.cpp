#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve() {
    int n;
    cin >> n;
    int ar[n];
    int ans = -1;
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
        if (i > 0) {
            if (abs(ar[i] - ar[i - 1]) <= 1) {
                ans = 0;
            }
        }
    }
    if (ans == -1) {
        for (int i = 0; i < n - 1; i++) {
            if (i == 0) {
                if (i + 2 < n && min(ar[i], ar[i + 1]) <= ar[i + 2] && ar[i + 2] <= max(ar[i], ar[i + 1])) {
                    ans = 1;
                    break;
                }
            } else if (i == n - 2) {
                if (i - 1 >= 0 && min(ar[i], ar[i + 1]) <= ar[i - 1] && ar[i - 1] <= max(ar[i], ar[i + 1])) {
                    ans = 1;
                    break;
                }
            } else {
                if (min(ar[i], ar[i + 1]) <= ar[i + 2] && ar[i + 2] <= max(ar[i], ar[i + 1])) {
                    ans = 1;
                    break;
                } else if (min(ar[i], ar[i + 1]) <= ar[i - 1] && ar[i - 1] <= max(ar[i], ar[i + 1])) {
                    ans = 1;
                    break;
                }
            }
        }
    }
    cout << ans << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}