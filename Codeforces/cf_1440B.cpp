#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(n * k + 1);
    for (int i = 1; i <= n * k; i++) {
    	cin >> v[i];
    }
    int len =  n * k + 1, mid = (n + 2) / 2;
    ll ans = 0;
    for (int i = 1; i <= k; i++) {
    	ans += v[len - mid];
    	len -= mid;
    }
    cout << ans << "\n";
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