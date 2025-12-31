#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
    	cin >> v[i];
    }
    vector<int> vis(n + 1, 0), ans(n + 1); 
    for (int i = 1; i <= n; i++) {
    	int val = v[i];
    	if(!vis[val]) {
    		vector<int> curr;
    		while(!vis[val]) {
    			curr.push_back(val);
    			vis[val] = 1;
    			val = v[val];
    		}
    		for (auto x : curr) {
    			ans[x] = int(curr.size());
    		}
    	}
    }

    for (int i = 1; i <= n; i++) {
    	cout << ans[i] << ' ';
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}