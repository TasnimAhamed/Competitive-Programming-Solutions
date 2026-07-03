#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> pref(n + 1, 0);
    vector<int> freq(n + 1, 0);
    for (int i = 1; i <= n; i++) {
    	int x; cin >> x;
    	pref[i] = pref[i - 1] + x;
    	freq[x]++;
    }

    int ans = 0;
    for (int l = 1; l <= n; l++) {
    	for (int r = l + 1; r <= n; r++) {
    		int sum = pref[r] - pref[l - 1];
    		if (sum > n) {
    			continue;
    		}
    		if (freq[sum]) {
    			ans += freq[sum];
    			freq[sum] = 0;
    		}
    	}
    }

    cout << ans << "\n";
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