#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
   vector<int> v(7);
    int sum = 0;
    for (int i = 0; i < 7; i++) {
        cin >> v[i];
        sum += v[i];
    }

    int mx = *max_element(v.begin(), v.end());

    int ans = 2 * mx - sum;
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