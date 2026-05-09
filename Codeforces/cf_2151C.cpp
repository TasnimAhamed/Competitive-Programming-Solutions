#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<ll> v(2 * n + 1, 0), even(2 * n + 1, 0), odd(2 * n + 1, 0), pref(2 * n +  1, 0);
    for (int i = 1; i <= 2 * n; i++) {
    	cin >> v[i];
    	if (i & 1) {
    		odd[i] = v[i];
    	}
    	else {
    		even[i] = v[i];
    	}
    	pref[i] = pref[i - 1] + v[i];
    }
    for (int i = 1; i <= 2 * n; i++) {
    	odd[i] += odd[i - 1];
    	even[i] += even[i - 1];
    }

    vector<ll> ans(n + 1);
    for (int i = 1; i <= n; i++) {
    	int l = i, r = 2 * n - i;
    	ll left = pref[i], right = pref[2 * n] - pref[r];
    	ll mid_even = even[r] - even[l], mid_odd = odd[r] - odd[l];
    	ll res = right - left;

    	if (i&1) {
    		res += (mid_even - mid_odd);
    	}
    	else {
    		res += (mid_odd - mid_even);
    	}

    	// cout << left << " " << right << "\n";
    	// cout << mid_even << " " << mid_odd << "\n";
    	ans[i] = res;
    }

    for (int i = 1; i <= n; i++) {
    	cout << ans[i] << (i == n ? "\n" : " ");
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