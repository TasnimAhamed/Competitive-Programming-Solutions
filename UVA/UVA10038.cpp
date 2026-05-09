#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    while (cin >> n) {
    	if (n == 0) {
    		cout << "Not Jolly\n";;
    		continue;
    	}
    	vector<int> v(n);
    	set<int> st;
    	for (auto &x : v) {
    		cin >> x;
    	}
    	if (n == 1) {
    		cout << "Jolly\n";;
    		continue;
    	}
    	for (int i = 1; i < n; i++) {
    		int diff = abs(v[i] - v[i - 1]);
    		if (diff >= 1 and diff <= (n - 1)) {
    			st.insert(diff);
    		}
    	}

    	if (st.size() == (n - 1)) {
    		cout << "Jolly\n";
    	}
    	else {
    		cout << "Not jolly\n";
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