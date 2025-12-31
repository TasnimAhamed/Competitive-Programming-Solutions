#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	mp[x]++;
    }
    int ans = mp[k], cnt = 0;
    for (int i = 0; i < k; i++) {
    	if(mp[i] == 0) {
    		++cnt;
    	}
    }
    // cout << cnt << "\n";

    cout << max(cnt, ans) << "\n";
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