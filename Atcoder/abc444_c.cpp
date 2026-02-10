#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    ll sum = 0;
    for (auto &x : v) {
    	cin >> x;
    	sum += x;
    }
    ll mx = *max_element(v.begin(), v.end());

    ll lo = max(mx, (sum + n - 1) / n);
    ll hi = (2 * sum) / n;

    vector<ll> div;
    for (ll i = 1; i * i <= sum; i++) {
    	if (sum % i == 0) {
    		div.push_back(i);
    		if (sum / i != i) {
    			div.push_back(sum / i);
    		}
    	}
    }

    // cout << sum << "\n"; 

    sort(div.begin(), div.end());
    sort(v.begin(), v.end());

   	// for (auto x : div) {
   	// 	cout << x << " ";
   	// }
   	// cout << "\n";

    vector<int> ans;
    for (int i = 0; i < div.size(); i++) {
    	int stick = div[i];
    	if (stick < lo or stick > hi) {
    		continue;
    	}
    	int left = 0, right = n - 1;
    	int ok = 0;
    	while (left < right) {
    		if (v[right] == stick) {
    			--right;
    		}
    		else if (v[left] + v[right] == stick) {
    			++left;
    			--right;
    		}
    		else {
    			ok = 1;
    			break;
    		}
    	}
    	if (!ok) {
    		ans.push_back(stick);
    	}
    }
    sort(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++) {
    	cout << ans[i] << (i == (ans.size() - 1) ? "\n" : " ");
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}