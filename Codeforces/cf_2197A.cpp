#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int x; cin >> x;

    auto digit_sum = [&] (ll n) {
    	int sum = 0;
    	while (n > 0){
    		sum += n % 10;
    		n /= 10;
    	}
    	return sum;
    };

    int cnt = 0;

    for (ll i = x; i <= x + 100; i++) {
    	if ((i - digit_sum(i)) == x) {
    		++cnt;
    	}
    }

    cout << cnt << "\n";
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