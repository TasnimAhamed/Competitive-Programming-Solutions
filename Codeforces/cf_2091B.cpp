#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, x; cin >> n >> x;
    vector<ll> v(n);
    for(auto &x : v) cin >> x;
    sort(v.rbegin(), v.rend());

    int ans = 0, st = 0, player = 0;
    for(int i = 0; i < n; i++){
        player++;
        st = player * v[i];
        if(st >= x){
            ans++;
            player = 0;
        }
    }
    cout << ans << "\n";
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

