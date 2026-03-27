#include <bits/stdc++.h>
using namespace std;
const int MX = 1e5 + 10;

vector<int> par, sz;

int find(int x) {
    if (par[x] == x) return x;
    return par[x] = find(par[x]);
}
void unite(int a, int b) {
    a = find(a); b = find(b);
    if (a == b) return;
    if (sz[a] < sz[b]) swap(a,b);
    par[b] = a;
    sz[a] += sz[b];
}

void solve() {
    int n, m;
    cin >> n >> m;
    
    par.resize(n + 1);
    sz.resize(n + 1, 1);
    iota(par.begin(), par.end(), 0);

    for (int i = 0; i < m; i++) {
        int k; 
        cin >> k;
        
        vector<int> v(k);
        for (int j = 0; j < k; j++) {
            cin >> v[j];
        }
        for (int j = 1; j < k; j++) {
            unite(v[0], v[j]);
        }
    }

    vector<int> ans(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        ans[find(i)]++;
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[find(i)] << (i == n ? "\n" : " ");
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1; 
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;
}