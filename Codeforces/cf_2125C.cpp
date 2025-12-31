#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll cntNotDiv(ll n) {

    ll a = n / 2;
    ll b = n / 3;
    ll c = n / 5;
    ll d = n / 7;

    ll ab = n / 6;
    ll ac = n / 10;
    ll ad = n / 14;
    ll bc = n / 15;
    ll bd = n / 21;
    ll cd = n / 35;

    ll abc = n / 30;
    ll abd = n / 42;
    ll acd = n / 70;
    ll bcd = n / 105;

    ll abcd = n / 210;

    ll div = a + b + c + d - ab - ac - ad - bc - bd - cd + abc + abd + acd + bcd - abcd;

    return div;
}

void solve() {
    ll a, b;
    cin >> a >> b;

    ll res = cntNotDiv(b);
    ll res2 = cntNotDiv(a - 1);

    cout << (b - res + res2 - ( a - 1)) << "\n";
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