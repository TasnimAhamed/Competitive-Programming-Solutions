#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n = 0, x;
    multiset<int> st;
    while (cin >> x) {    	
    	st.insert(x);
    	++n;
    	if (n & 1) {
    		int mid = (n + 1) / 2;
    		int idx = 0;
    		for (auto x : st) {
    			++idx;
    			if (idx == mid) {
    				cout << x << "\n";
    				break;
    			}
    		}
    	}
    	else {
    		int ff = n / 2;
    		int ss = n / 2 + 1;
    		int sum = 0, idx = 0;
    		for (auto x : st) {
    			++idx;
    			if (idx == ff or idx == ss) {
    				sum += x;
    			}

    			if (idx > ss) {
    				break;
    			}
    		}
    		cout << sum / 2 << "\n";
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