#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin >> n;
    vector<int> v(n+1);

    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    int i = 1;
    ll ans = LLONG_MAX;
    while( i <= n){
        while(v[i] == v[i-1]) ++i;
        ll lcost = 1LL * v[i] * (i-1);
        while(v[i] == v[i+1] and i < n) ++i;
        ll rcost = 1LL * v[i] * (n - i);
//        cout << lcost << " " << rcost << "\n";
        ans = min(ans, lcost + rcost);
        ++i;
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

