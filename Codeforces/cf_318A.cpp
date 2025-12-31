#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, k; cin >> n >> k;
    ll odd = n/2;
    ll even = n/2;
    if(n&1) ++odd;
    if(k <= odd){
    	cout << (2 * k - 1) << "\n";
    }
    else{
    	cout << (k - odd) * 2 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;

}