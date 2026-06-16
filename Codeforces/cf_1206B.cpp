#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;

    int n_cnt = 0, z_cnt = 0, p_cnt = 0;
    ll cost = 0;
    
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	if (x == 0) {
    		++z_cnt;
    	}
    	else if (x > 0) {
    		++p_cnt;
    		cost += (x - 1);
    	}
    	else {
    		++n_cnt;
    		cost += (-1 - x);
    	}
    }

    cost += z_cnt;
    if (n_cnt & 1 and !z_cnt) {
    	cost += 2;
    }
    cout << cost << "\n";
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