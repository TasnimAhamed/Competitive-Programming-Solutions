#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, tt = 0; 
    while (cin >> n && n) {
        ++tt;
    	vector<int> v(n);
    	for (auto &x : v) {
    		cin >> x;
    	}
    	sort(v.begin(), v.end());

    	int m; cin >> m;
    	cout << "Case " << tt << ":\n";

    	while (m--) {
    		int x; cin >> x;
    		int i = 0, j = n - 1;
    		int closestSum = v[0] + v[1];
    		int closestDiff = abs(closestSum - x);
    		while (i < j) {
    			int sum = v[i] + v[j];
    			int diff = abs(sum - x);

    			if (diff < closestDiff) {
    				closestDiff = diff;
    				closestSum = sum;
    			}

    			if (sum < x) {
    				++i;
    			}
    			else if (sum > x) {
    				--j;
    			}
    			else {
    				break;
    			}
    		}

			cout << "Closest sum to " << x << " is " << closestSum << ".\n";
    	}
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