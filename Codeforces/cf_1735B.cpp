#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto& x : v) {
    	cin >> x;
    }
    int mn = v[0], need = 2 * mn - 1;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
    	if (v[i] > need) {
    		cnt += (v[i] / need);
    		if (v[i] % need == 0) {
    			--cnt;
    		}
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