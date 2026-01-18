#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool isOk(ll  r) {
	int digit_cnt = 0;
	ll tmp = r;
	while(tmp  > 0) {
		++digit_cnt;
		tmp /= 10;
	}
	int left_cnt = (digit_cnt + 1) / 2;
	int right_cnt = digit_cnt - left_cnt;


}

void solve() {
    ll l, r; cin >> l >> r;

    wile(l <= r) {
    	if(gcd(r)) {
    		cout << r << "\n";
    	}
    	--r;
    }

    return;

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