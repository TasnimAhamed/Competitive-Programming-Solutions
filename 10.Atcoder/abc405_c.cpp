#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin >> n;
    vector<ll> v(n);
    vector<ll> pre(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(i == 0){
            pre[i] = v[i];
        }
        else{
            pre[i] = pre[i-1] + v[i];
        }
    }
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ll ff = v[i] * (pre[n-1] -  pre[i]);
        ans += ff;
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

