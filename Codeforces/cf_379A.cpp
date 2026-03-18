#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int a, b; cin >> a >> b;
	int cnt = 0, carry = 0;
	while(a > 0) {
		cnt += a;
		int new_candle = a + carry;
		a = new_candle / b;
		carry = new_candle % b;
		
	}
	cout << cnt << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }
    return 0;
}