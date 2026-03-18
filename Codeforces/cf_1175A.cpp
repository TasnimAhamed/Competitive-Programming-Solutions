#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	ll n, k; cin >> n >> k;
	ll cnt = 0;
	while(n > 0) {
		if(n % k) {
			ll rem = n % k;
			cnt += rem;
			n -= rem;
		}
		else{
			n /= k;
			++cnt;
		}
	}
	cout << cnt << "\n";
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}