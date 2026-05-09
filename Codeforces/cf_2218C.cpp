#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;

    int l = 1, r = 3 * n;
    vector<int> ans;

    while (l < r) {
        ans.push_back(l);
        ans.push_back(r - 1);
        ans.push_back(r);

        l++;
        r -= 2;
    }

    for (auto x : ans) {
        cout << x << " ";
    }
    cout << "\n";
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