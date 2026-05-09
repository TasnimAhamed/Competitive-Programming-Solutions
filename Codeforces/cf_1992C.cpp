#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m, k; cin >> n >> m >> k;
    vector<int> per(n + 1);
    int cnt = 1;
    for (int i = n - m + 1; i <= n; i++) {
    	per[i] = cnt;
    	++cnt;
    }
    cnt = n;
    for (int i = 1; i <= n - m; i++) {
    	per[i] = cnt--;
    }
    for (int i = 1; i <= n; i++) {
    	cout << per[i] << (i == n ? "\n" : " ");
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