#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve() {
	int n, m; cin >> n >> m;
	int idx[n + 5] = {0};

	for (int i = 0; i < m; i++) {
		int x; cin >> x;
		idx[x]++;
	}

	for (int i = 1; i <= n; i++) {
		cout << i << " " << idx[i] << "\n";
	}

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;
}