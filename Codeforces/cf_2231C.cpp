#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;

    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }

    unordered_map<int, int> freq, cnt;
    for (auto x : v) {
        int op = 0;
        unordered_set<int> vis;

        while (!vis.count(x)) {
            vis.insert(x);

            freq[x] += op;
            cnt[x]++;

            if (x & 1) {
                ++x;
                ++op;
            }
            else {
                x /= 2;
                ++op;
            }
        }
    }

    int mn = INT_MAX;
    for (auto [key, val] : cnt) {
        // cout << key << " " << val << "\n";
        if (val == n) {
            mn = min(mn, freq[key]);
        }
    }
    cout << mn << "\n";
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