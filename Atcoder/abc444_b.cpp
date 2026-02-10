#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;

    int cnt = 0;
    auto get_digit_sum = [&] (int n) {
    	int sum = 0;
    	while (n > 0) {
    		sum += (n % 10);
    		n /= 10;
    	}
    	return sum == k;
    };
    for (int i = 1; i <= n; i++) {
    	if (get_digit_sum(i)) {
    		++cnt;
    	}
    }
    cout << cnt << "\n";

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