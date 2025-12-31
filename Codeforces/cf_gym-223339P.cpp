#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int get_log(ll n) {
	if(n == 1){
		return 0;
	}
	return 1 + get_log(n/2);
}

void solve() {
    ll n; cin >> n;

    cout << get_log(n) << '\n';
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