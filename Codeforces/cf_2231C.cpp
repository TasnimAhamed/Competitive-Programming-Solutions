#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;

    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }

    ll ans;
    unordered_set<int> se;
    unordered_map<int, ll> cost;
    
    for (int i = 0; i < n; i++) {
        ans = 1e18;
        int cnt = 0, x = v[i];

        unordered_set<int> vis;
        unordered_map<int, ll> curr_cost;

        while (true) {
            if (i == 0 or (i and se.find(x) != se.end())) {
                vis.insert(x);
                ans = min(ans, cost[x] + cnt);
                curr_cost[x] = cost[x] + cnt;
            }

            if (x & 1) ++x;
            else x /= 2;
            ++cnt;

            if (x == 1) {
                vis.insert(x);
                ans = min(ans, cost[x] + cnt);
                if (curr_cost.find(x) == curr_cost.end()) {
                    curr_cost[x] = cost[x] + cnt;
                }
                break;
            }

        }

        cost.swap(curr_cost);
        se.swap(vis);
    }

    cout << ans << "\n";
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