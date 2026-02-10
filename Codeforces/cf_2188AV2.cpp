#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	 int n; cin >> n;
	 int arr[n];

	 int lo = 1, hi = n;

	 int ok = 1;

	 for (int i = n - 1; i >= 0; i--) {
	 	if (ok == 1) {
	 		arr[i] = lo;
	 		++lo;
	 		ok = 0;
	 	}
	 	else {
	 		arr[i] = hi;
	 		--hi;
	 		ok = 1;
	 	}
	 }

	 for (int i = 0; i < n; i++) {
	 	cout << arr[i] << " ";
	 }
	 cout << "\n";
	 

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