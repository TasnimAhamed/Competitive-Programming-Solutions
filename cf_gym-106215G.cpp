#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    if(k == 1) {
        ll ans = 1LL * n * (n - 1) / 2;
        cout << ans << "\n";
    }
    else {
        cout << n - 1 << "\n";
    }

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}