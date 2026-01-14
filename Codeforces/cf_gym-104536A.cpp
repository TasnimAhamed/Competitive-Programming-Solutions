#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {

    ll n; cin >> n;

    ll lg = __builtin_popcount(n + 1);
    ll new_val = ((1LL << lg) - 1);

    if(new_val == (n + 1)) {
        cout << new_val << "\n";
    }
    else{
        cout << -1 << "\n";
    }

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}