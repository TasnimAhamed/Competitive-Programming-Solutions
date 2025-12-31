#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int arr[n+1][n+1];

    cout << (2 * n - 3) << "\n";
    for (int i = 1; i <= n; i++) {
    	int val = n - i + 1, j_range = n - i + 1;
		if(i != n) {
			cout << i << " " << 1 << " " << j_range << "\n";
		}
		if(i > 2) {
			cout << i << " " << j_range + 1 << " " << n << "\n";
		}
	}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;

}