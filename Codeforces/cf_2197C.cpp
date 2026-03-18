#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll p, q; cin >> p >> q;
    
    ll gcd = __gcd(p, q);
    p /= gcd;
    q /= gcd;

    if (3 * p == 2 * q) {
    	cout << "Bob\n";
    	return;
    }

    ll r = 3 * p - 2 * q;
    if (r <= 0) {
    	cout << "Alice\n";
    	return;
    }

 
    if (r % 5 != 0) {
    	cout << "Bob\n";
    }
    else {
    	cout << "Alice\n";
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