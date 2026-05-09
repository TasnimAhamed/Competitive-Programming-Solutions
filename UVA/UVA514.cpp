#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    while (cin >> n and n) {
		vector<int> v(n);
		while (cin >> v[0] and v[0]) {
	    	// cout << v[0] << "\n";
    		for (int i = 1; i < n; i++) {
    			cin >> v[i];
    		}

    		stack<int> coach;
    		int currCoach = 1, idx = 0;
    		while (currCoach <= n) {
    			coach.push(currCoach);

    			while (!coach.empty() and coach.top() == v[idx]) {
    				coach.pop();
    				++idx;

    				// cout << idx << "\n";

    				if (idx >= n) {
    					break;
    				}
    			}

    			++currCoach;
    		}

    		if (coach.empty()) {
    			cout << "Yes\n";
    		}
    		else {
    			cout << "No\n";
    		}
		}
    	
    	cout << "\n";
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