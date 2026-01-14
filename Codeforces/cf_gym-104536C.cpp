#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int MX = 2e5 + 5;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n), freq(MX, 0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        freq[v[i]]++;
    }

    vector<int> div(MX, 0);
    for (int d = 1; d < MX; d++) {
        for (int m = d; m < MX; m += d) {
            div[d] += freq[m];
        }
    }

    vector<int> ans(n + 1, 1);
    for (int d = 1; d < MX; d++) {
        int cnt = div[d];
        if (cnt > 0) {
            ans[cnt] = max(ans[cnt], d);
        }
    }

    for (int i = n - 1; i >= 1; i--) {
        ans[i] = max(ans[i], ans[i + 1]);
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[i] << (i == n ? "\n" : " ");
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}