#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 4005;
vector<vector<int>> g;
vector<int> color;
int ans = 0;

pair<int, int> dfs(int u, int p) {

	int w_cnt = color[u] == 1;
	int b_cnt = color[u] == 0;

	for (auto v : g[u]) {
		if (v == p) {
			continue;
		}

		auto [w, b] = dfs(v, u);
		w_cnt += w;
		b_cnt += b;
	}

	if (w_cnt == b_cnt) {
		++ans;
	}

	return {w_cnt, b_cnt};
}

void solve() {
    int n; cin >> n;

    g.assign(n + 1, {});
    color.assign(n + 1, -1);

    vector<int> parent(n + 1);
    for (int i = 2; i <= n; i++) {
        cin >> parent[i];
    }

    string s; cin >> s;
    for (int i = 1; i <= n; i++) {
        color[i] = (s[i - 1] == 'W');
    }

    for (int i = 2; i <= n; i++) {
        int p = parent[i];
        int c = i;

        g[p].push_back(c);
        g[c].push_back(p);
    }

    ans = 0;
    dfs(1, -1);

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