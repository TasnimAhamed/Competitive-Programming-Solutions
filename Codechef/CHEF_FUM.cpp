#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
void solve() {
    int n; cin >> n;
    ll ans = 1;
    for(int i = 1; i <= n; i++){
    	ans = (ans % MOD * i % MOD) % MOD;
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;

}