#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll a, b; cin >> a >> b;
    ll gcd = __gcd(a, b);
    a = a / gcd;
    b = b / gcd;

    ll c, d; cin >> c >> d;
    gcd = __gcd(c, d);
    c = c / gcd;
    d = d / gcd;

    if (a == c and b == d) {
    	cout << 0 << "\n";
    }
    else {
    	ll ad = a * d;
    	ll bc = b * c;
    	if ((bc != 0 and ad % bc == 0) or (ad != 0 and bc % ad == 0)) {
    		cout << 1 << "\n";
    	}
    	else {
    		cout << 2 << "\n";
    	}
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}