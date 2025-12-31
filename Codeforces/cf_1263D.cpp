#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 30;
vector<string> str[N];
bool vis[N];
void dfs(int u) {
	vis[u] = true;
	for (auto v : str[u]) {
		for (auto ch : v)
		{
			int idx = ch - 'a';
			if(!vis[idx]) {
				vis[idx] = true;
				dfs(idx);
			}
		}
	}
}

void solve() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
    	string s; cin >> s;
    	for (auto ch : s) {
    		int idx = ch - 'a';
    		str[idx].push_back(s);
    	}
    }
    int ans = 0;
    for (int i = 0; i < 26; i++) {
    	if(!vis[i] and !str[i].empty()) {
    		++ans;
    		dfs(i);
    	}
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;
}