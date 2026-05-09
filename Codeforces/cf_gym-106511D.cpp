#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    if (n <= 10) {
    	cout << n << "\n";
    	return;
    }

    int ans = 10;

    for (int i = 1; i <= 9; i++) {
    	ll st = i, pw = 10;
    	int cnt = 1;
    	while ((st * pw + i) <= n) {
    		// cout << "st : " << st << "\n";
    		st = st * pw + i;
    		// cout << "st1 : " << st << "\n";
    		// pw *= 10;
    		++cnt;
    	}
    	--cnt;
    	ans += cnt;
    }

    int num = 1;
    int cnt = 0;

    while (num <= n) {
    	num *= 10;
    	++cnt;
    }
	--cnt;
	ans += (cnt - 1);
	

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}