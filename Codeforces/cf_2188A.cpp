#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
    vector<int> ans(n);

    int lo = 1, hi = n;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            ans[n - 1 - i] = lo++;
        } 
        else {
            ans[n - 1 - i] = hi--;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << (i == n - 1 ? "\n" : " ");
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