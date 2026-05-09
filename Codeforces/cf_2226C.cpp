#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    multiset<int> st;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	st.insert(x);
    }

    auto isOK = [&] (int mex) {
    	multiset<int> st2(st.begin(), st.end());
    	for (int i = mex - 1; i >= 0; i--) {
    		auto it = st2.find(i);
    		if (it != st2.end()) {
    			st2.erase(it);
    			continue;
    		}
    		auto it2 = st2.upper_bound(2 * i);
    		if (it2 == st2.end()) {
    			return false;
    		}
    		st2.erase(it2);
    	}
    	return true;
    };

    int lo = 0, hi = n + 1;
    while (lo <= hi) {
    	int mid = lo + (hi - lo) / 2;

    	if (isOK(mid)) {
    		lo = mid + 1;
    	}
    	else {
    		hi = mid - 1;
    	}
    }

    cout << hi << "\n";

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