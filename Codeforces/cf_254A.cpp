#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {

	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; cin >> n;
    map<int, vector<int>> mp;
    for (int i = 0; i < 2 * n; i++) {
        int x; cin >> x;
        mp[x].push_back(i + 1);
    }
    for (auto [key, val] : mp) {
        if(val.size() & 1) {
            cout << -1 << "\n";
            return;
        }
    }
    for (auto [key, val] : mp) {
        for (int i = 0;i < val.size(); i += 2) {
            cout << val[i] << " " << val[i + 1] << "\n";
        }
    }
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