#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool isOk(ll r) {
	if (r <= 10) {
		return false;
	}
	string s = to_string(r);

	int sz = (s.size() + 1) / 2;
	ll left_num = stoll(s.substr(0, sz));
	ll right_num = stoll(s.substr(sz));

	ll gcd = __gcd(left_num, right_num);

	return gcd == 1;
}


void solve() {
	ll l, r; cin >> l >> r;	

	while(l <= r) {
		if(isOk(r)) {
			cout << r << "\n";
			return;
		}
		--r;
	}

	cout << -1 << "\n";

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
}