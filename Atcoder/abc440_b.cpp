#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++) {
    	int x; cin >> x;
    	v.push_back({x, i});
    }
    sort(v.begin(), v.end());
    for (int i = 0; i <= 2; i++) {
    	cout << v[i].second << (i == 2 ? "\n" : " ");
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