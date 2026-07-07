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
    int cnt = 0;
    for (auto [key, val] : mp) {
    	cnt += (val - 1);
    }

    cout << mp.size() - (cnt & 1) << "\n";
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