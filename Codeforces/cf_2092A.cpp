#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin >> n;
    vector<ll> v(n);
    for(auto &x : v) cin >> x;
    ll mn = *min_element(v.begin(), v.end());
    ll mx = *max_element(v.begin(), v.end());
    cout << (mx - mn) << "\n";
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

