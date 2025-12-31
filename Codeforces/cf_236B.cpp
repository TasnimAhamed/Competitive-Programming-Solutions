#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1073741824;
const int N = 1e6 + 5;
int divisor[N];
void get_divisors() {
	for (int i = 1; i < N; i++){
		for (int j = i; j < N; j += i){
			divisor[j]++;
		}
	}
}
void solve() {
	get_divisors();
    int a, b, c; cin >> a >> b >> c;

    ll ans = 0;
    for (int i = 1; i <= a; i++) {
    	for (int j = 1; j <= b; j++) {
    		for (int k = 1; k <= c; k++){
    			int p = i * j * k;
    			ans += divisor[p];
    		}
    	}
    }

    cout << ans%MOD << "\n";

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