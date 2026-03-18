#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int min_moves(int n, int k) {
    queue<pair<int,int>> q;
    set<int> vis;

    q.push({n,0});
    vis.insert(n);

    while(!q.empty()) {
        auto [x,d] = q.front();
        q.pop();

        if(x == k) return d;

        if(x*2 <= 2*k && !vis.count(x*2)) {
            vis.insert(x*2);
            q.push({x*2,d+1});
        }

        if(x-1 > 0 && !vis.count(x-1)) {
            vis.insert(x-1);
            q.push({x-1,d+1});
        }
    }

    return -1;
}

void solve() {
    int n, m; cin >> n >> m;
    if (n >= m) {
    	cout << n - m << "\n";
    }
    else {
    	int cnt = min_moves(n, m);
    	cout << cnt << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}