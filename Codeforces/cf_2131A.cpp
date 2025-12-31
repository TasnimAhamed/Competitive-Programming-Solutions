#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (auto &x : a) {
    	cin >>  x;
    }
    for (auto &x : b) {
    	cin >> x;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
    	ans += (a[i] > b[i]  ? (a[i] - b[i]) : 0);
    }
    cout << ans + 1 << '\n';

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}