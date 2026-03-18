#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = 1e9;

void solve() {
    int n; cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    int dp[n + 1][7];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 6; j++) {
            dp[i][j] = INF;
        }
    }

    for (int i = 1; i <= 6; i++) {
        dp[1][i] = (v[1] != i);
    }

    // for (int i = 1; i <= 6; i++) {
    //     cout << dp[1][i] << " ";
    // }
    // cout << "\n";

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= 6; j++) {
            for (int k = 1; k <= 6; k++) {
                if (j == k or (j + k) == 7) {
                    continue;
                }
                
                dp[i][j] = min(dp[i][j], dp[i-1][k] + (v[i] != j));
            }
        }
    }

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= 6; j++) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    int ans = INF;
    for (int i = 1; i <= 6; i++) {
        ans = min(ans, dp[n][i]);
    }
    cout << ans << "\n";
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