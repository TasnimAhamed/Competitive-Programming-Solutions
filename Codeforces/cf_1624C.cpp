#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n), pos(n + 1, 0);
    for (auto &x : v) {
    	cin >> x;
    	while (x > n){
    		 x /= 2;
    	}
    }

    for (auto &x : v) {
    	if (!pos[x]) {
    		pos[x] = 1;
    	}
    	else {
    		while (x >= 1) {
    			if (pos[x] == 0) {
    				break;
    			}
    			x /= 2;
    		}
    		if (x >= 1) {
    			pos[x] = 1;
    		}
    	}
    }

    int cnt = count(pos.begin(), pos.end(), 1);

    if (cnt == n) {
    	cout << "YES\n";
    }
    else {
    	cout << "NO\n";
    }

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