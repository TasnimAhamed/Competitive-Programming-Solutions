#include<bits/stdc++.h>
using namespace std;
using ll = long long;


array<int, 2> bfs(int st, vector<vector<int>> &g, int n) {
    vector<int> d(n, -1);
    vector<int> vis(n, 0);
    queue<int> q;
    d[st] = 0;
    q.push(st);
    int mx = st;
    while(!q.empty()) {
        int u = q.front();
        q.pop();

        for (auto v : g[u]) {
            if (d[v] == -1) {
                d[v] = d[u] + 1;
                q.push(v);
                if (d[v] > d[mx]) {
                    mx = v;
                }
            }
        }
    }

    return {mx, d[mx]};
}


int get_diameter(int st, vector<vector<int>> &g, int n) {
    array<int, 2> arr = bfs(st, g, n);
    // cout << arr[0] << " " << arr[1] << "\n";

    array<int, 2> arr2 = bfs(arr[0], g, n);

    return arr2[1];

}


void solve() {
    int n; cin >> n;
    vector<vector<int>> g1(n);
    for (int i = 0; i < n - 1; i++) {
        int u, v; cin >> u >> v;
        --u, --v;
        g1[u].push_back(v);
        g1[v].push_back(u);
    }

    int m; cin >> m;
    vector<vector<int>> g2(m);
    for (int i = 0; i < m - 1; i++) {
        int u, v; cin >> u >> v;
        --u, --v;
        g2[u].push_back(v);
        g2[v].push_back(u);
    }


    int d1 = get_diameter(0, g1, n);
    int d2 = get_diameter(0, g2, m);


    int ans = (d1 + 1) / 2 + (d2 + 1) / 2 + 1;

    ans = max({d1, d2, ans});

    cout << ans << "\n";


}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}