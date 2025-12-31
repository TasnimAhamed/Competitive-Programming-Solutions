#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int get_com(int n, int r) {
	if (n < r or n < 0 or r < 0) {
		return 0;
	}
	if (n == 0 or r == 0) {
		return 1;
	}

	return get_com(n-1, r) + get_com(n-1, r -1);
}


void solve() {
    int n, r; cin >> n >> r;

    cout << get_com(n, r) << "\n";

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