#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll a, b, k;
    cin >> a >> b >> k;

    ll gcd = __gcd(a, b);
    a /= gcd;
    b /= gcd;

    if(a <= k and b <= k) {
    	cout << 1 << "\n";
    }
    else{
    	cout << 2 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}