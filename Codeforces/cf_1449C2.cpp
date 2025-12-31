#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1e18;
vector<ll> vals;

void pre() {
    ll ff = 1LL;
    vals.push_back(ff);
    while(ff <= 1e18) {
    	ff *= 3;
        vals.push_back(ff);
    }
}

void solve() {
	ll n; cin >> n;
    ll mx = 0;
    for (auto x : vals) {
        mx += x;
        if(mx >= n) break;
    }
    int sz = vals.size();
    for (int i = sz - 1; i >= 0; i--) {
        if((mx - vals[i]) >= n) {
            mx -= vals[i];
        }
    }

    cout << mx << "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    pre();
    
    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}