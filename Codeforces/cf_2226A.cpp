#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 676767677;
const ll INF = LLONG_MAX;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
    	cin >> v[i];
    }

    vector<ll> dp(n + 1, INF);

    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        ll prod = 1;

        for (int j = i; j >= 1; j--) {
            
            if (j < i && v[j] > v[j + 1]) {
            	break;
            }

            prod = (prod * v[j]) % MOD;

            dp[i] = min(dp[i], (dp[j - 1] + prod) % MOD);
        }
    }

    cout << dp[n] % MOD << "\n";
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