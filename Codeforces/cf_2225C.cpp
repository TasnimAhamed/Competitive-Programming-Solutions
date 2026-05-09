#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = 1e9;

void solve() {
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;

    vector<int> dp(n + 1, INF);
    dp[0] = 0;

    auto cost = [&] (char a, char b) {
	    int red = (a == 'B') + (b == 'B');
	    int black = (a == 'R') + (b == 'R');
	    return min(red, black);
	};

    for (int i = 1; i <= n; ++i) {

        dp[i] = min(dp[i], dp[i - 1] + cost(s1[i - 1], s2[i - 1]));

        if (i >= 2) {
            int hc = cost(s1[i - 2], s1[i - 1]) + cost(s2[i - 2], s2[i - 1]);
            dp[i] = min(dp[i], dp[i - 2] + hc);
        }
    }

    cout << dp[n] << "\n";
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