#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int get_ans(ll n){
	if (n == 1) {
		return 1;
	}
	if (n&1) {
		n = 3 * n + 1;
	}
	else {
		n /= 2;
	}
	int count = 1;
	count += get_ans(n);
	return count;
}

void solve() {
    int n; cin >> n;

    cout << get_ans(n) << "\n";
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