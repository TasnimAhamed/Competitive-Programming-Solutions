#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll a, b, c; cin >> a >> b >> c;
    ll f_diff = b - a;
    ll s_diff = c - b;

    ll tmp = b - s_diff;
    if (tmp > 0 and tmp % a == 0) {
    	cout << "YES\n";
    	return;
    }

    tmp = b + f_diff;
    if (tmp > 0 and tmp % c == 0) {
    	cout << "YES\n";
    	return;
    }

    tmp = (a + c) / 2;
    if ((a+c)%2 == 0 and tmp % b == 0) {
    	cout << "YES\n";
    	return;
    }

    cout << "NO\n";

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