#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> diff(m + 1, 0);

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        diff[a]--;
        diff[b]++;
    }

    for (int j = 1; j <= m; j++) {
        cout << diff[j] << "\n";
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