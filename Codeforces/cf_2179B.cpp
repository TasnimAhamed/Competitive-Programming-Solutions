#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
    	cin >> v[i];
    }

    int ans = 0;
    for (int i = 1; i < n; i++) {
    	ans += abs(v[i] - v[i + 1]);
    }

    // cout << ans << "\n";

    int mx = -1;
    for (int i = 1; i <= n; i++) {
    	if(i == 1) {
    		mx = max(mx, abs(v[i] - v[i + 1]));
    	}
    	else if(i == n) {
    		mx = max(mx, abs(v[i] - v[i - 1]));
    	}
    	else {
    		int tmp = abs(v[i] - v[i - 1]) + abs(v[i] - v[i + 1]) - abs (v[i + 1] - v[i - 1]);
    		mx = max(mx , tmp);
    	}
    }

    cout << ans - mx << "\n";


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}