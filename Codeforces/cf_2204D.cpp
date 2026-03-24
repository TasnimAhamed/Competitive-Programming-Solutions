#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<int>> g;
vector<int> color;
int cnt0 = 0, cnt1 = 0;
bool isOK;

void dfs(int u, int c) {
    color[u] = c;
    if (c == 0) {
    	cnt0++;
    }
    else {
    	cnt1++;
    }

    for (int v : g[u]) {
        if (color[v] == -1) {
            dfs(v, 1 - c);
        } 
        else {
            if (color[v] == c) {
                isOK = false;
            }
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
 
    g.assign(n + 1, vector<int>());
    color.assign(n + 1, -1);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    } 

    ll ans = 0;

    for (int i = 1; i <= n; i++) {
        if (color[i] == -1) {
            cnt0 = 0;
            cnt1 = 0;
            isOK = true;

            dfs(i, 0);

            // cout << isOK << "\n";
            // cout << cnt0 << " " << cnt1 << "\n";

            if (isOK) {
                ans += max(cnt0, cnt1);
            }
        }
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