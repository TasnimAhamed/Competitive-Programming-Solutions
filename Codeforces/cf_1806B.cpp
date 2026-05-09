#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	mp[x]++;
    }
    int curr = 0;
    for (int mex = 0; mex < 2e5 + 1; mex++) {
    	if (mp[mex] == 0) {
    		cout << mex << "\n";
    		return;
    	}
    	int cnt = mp[mex];
    	int need = cnt - 1;
    	curr += cnt;
    	int rem = n - curr;
    	if (rem >= need) {
    		cout << mex << "\n";
    		return;
    	}
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