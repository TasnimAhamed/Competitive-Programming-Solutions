#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct DSU {
    vector<int> par;

    DSU(int n) {
        par.resize(n + 1);
        iota(par.begin(), par.end(), 0);
    }
    int find(int x) {
        if (par[x] == x) return x;
        return par[x] = find(par[x]);
    }
    void unite(int i, int j) {
        int u = find(i);
        int v = find(j);
        if (u != v) {
        	par[u] = v;
        }
    }
};

void solve() {
    int n; cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
    	cin >> v[i];
    }

    DSU dsu(n);

    for (int i = 1; i <= n / 2; i++) {
    	dsu.unite(i, 2 * i);
    }

    for (int i = 1; i <= n; i++) {
        if (dsu.find(i) != dsu.find(v[i])) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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