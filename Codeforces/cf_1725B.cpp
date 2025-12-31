#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, h; cin >> n >> h;
    vector<ll> player(n);
    for(auto &x : player) cin >> x;
    sort(player.rbegin(), player.rend());

    int ans = 0, player_count = n;
    for(int i = 0; i < n; i++){
        int need = ceil(h*1.0/player[i]);
        ll score = need * player[i];
        if(score <= h){
            ++need;
            score += player[i];
        }
        if(need <= player_count){
            ++ans;
            player_count -= need;
        }
        else break;
    }

    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
//    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}

