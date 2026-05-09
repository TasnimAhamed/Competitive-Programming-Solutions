
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
 
    vector<int> per(n + 1, 0);
    int cnt = 1;
    for (int i = k; i <= n; i += k) {
    	per[i] = cnt++;
    }

    for (int i = 1; i <= n; i++) {
    	if (!per[i]) {
    		 per[i] = cnt++;
    	}
    }

    for (int i = 1; i <= n; i++) {
    	cout << per[i] << (i == n ? "\n" : " ");
    }
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