#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, s; cin >> n >> s;

    vector<int> pref(n + 1, 0);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
    	int x; cin >> x;
    	sum += x;
    	pref[i] = pref[i - 1] + x;
    }
    if (sum < s) {
    	cout << -1 << "\n";
    	return;
    }

    int mn = INT_MAX;
    for (int i = 1; i <= n; i++) {
    	int left = i, right = n;
    	while (left <= right) {
    		int mid = (left + right) / 2;
    		int sum = pref[mid] - pref[i - 1];
    		if (sum <= s) {
    			mn = min(mn, n - (mid - i + 1));
    			left = mid + 1;
    		}
    		else {
    			right = mid - 1;
    		}
    	}
    }

    cout << mn << "\n";

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