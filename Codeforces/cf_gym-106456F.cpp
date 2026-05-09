#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<pair<int, int>> v;

string dfs(int u) {
    string res = "(";
    if (v[u].first) {
        res += dfs(v[u].first);
    }

    res += ")";

    if (v[u].second) {
        res += dfs(v[u].second);
    }

    return res;
}

void solve() {
    int n; cin >> n;
    v.resize(n + 1);
    for (int i = 1; i <= n; i++) {
    	cin >> v[i].first >> v[i].second;
    }

    string ans = dfs(1);

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