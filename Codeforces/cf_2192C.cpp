#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
 	ll n, h, k; cin >> n >> h >> k;
 	vector<ll> v(n);
 	ll sum = 0, mx = LLONG_MIN, mx_idx = -1;
 	for (int i = 0; i < n; i++) {
 		cin >> v[i];
 		sum += v[i];
 		if (v[i] > mx) {
 			mx = v[i];
 			mx_idx = i;
 		}
 	}

 	ll cy = (h - 1) / sum;
    ll rem_h = h - cy * sum;

 	vector<ll> pref(n, 0);
 	pref[0] = v[0];
 	for (int i = 1; i < n; i++) {
 		pref[i] = pref[ i - 1] + v[i];
 	}

 	ll ans = -1;
    for (int i = 0; i < n; i++) {
        if (pref[i] >= h) {
            ans = i + 1;
            break;
        }
    }
    
    if (ans == -1) {
        ll cy = (h - 1) / sum;
        ll rem_h = h - (cy * sum);
        for (int i = 0; i < n; i++) {
            rem_h -= v[i];
            if (rem_h <= 0) {
                ans = cy * (n + k) + (i + 1);
                break;
            }
        }
    }

    // cout << "ans: " << ans << "\n";

 	ll mn_pref = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        mn_pref = min(mn_pref, v[i]);
        
        ll curr_pref = 0;
        if (i >= mx_idx) {
            curr_pref = pref[i];
        } 
        else {
            curr_pref = pref[i] - mn_pref + mx;
        }

        ll curr_time = 0;
        if (h <= curr_pref) {
            curr_time = (ll)i + 1;
        } 
        else {
            ll needed = h - curr_pref;
            ll cy = (needed + sum - 1) / sum;
            curr_time = cy * (n + k) + (i + 1);
        }
        ans = min(ans, curr_time);
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