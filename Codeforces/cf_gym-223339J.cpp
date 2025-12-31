#include<bits/stdc++.h>
using namespace std;
using ll = long long;

long long fact(int n) {
	if(n == 1) {
		return 1;
	}
	return 1LL * n * fact(n - 1);
}

void solve() {
    int n; cin >> n;

    cout << fact(n) << "\n";
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