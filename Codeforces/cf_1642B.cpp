#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    map<int, int> mp;
    for (int i = 1; i <= n; i++) {
    	int x; cin >> x;
    	mp[x]++;
    }

    int sz = mp.size();

    for (int i = 1; i <= n; i++) {
    	cout << max(i, sz) << (i == n ? "\n" : " ");
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