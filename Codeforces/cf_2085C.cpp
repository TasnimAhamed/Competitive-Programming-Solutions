#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int x, y; cin >> x >> y;
    if(x == y) {
        cout << -1 << "\n";
    }
    else{
        int mx = max(x, y);
        int bit = int(log2(mx)) + 1;
        ll range = 1LL << bit;
        ll ans = range - mx;
        cout << ans << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}

