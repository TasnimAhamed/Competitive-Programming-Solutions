#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool can_reach(ll n, ll x) {
	if(x > n) {
		return false;
	}
	if(n == x) {
		return true;
	}

	return (can_reach(n, x * 10) or can_reach(n, x * 20));
}

void solve() {
    ll n; cin >> n;

    if (can_reach(n, 1)) {
    	cout << "YES\n";
    }
    else {
    	cout << "NO\n";
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