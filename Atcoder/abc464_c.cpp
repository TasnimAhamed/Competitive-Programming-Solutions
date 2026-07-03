#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m; cin >> n >> m;
    vector<array<int, 3>> v(n);
    for (auto &[a, d, b] : v) {
    	cin >> a >> d >> b;
    }

    vector<int> left(n + 2, 0), right(n + 2, INT_MAX);
    set<int> st;
    for (auto [a, d, b] : v) {
    	if (d == 1 or a == b) {
    		st.insert(b);
    	}
    	else {
    		
    		int left_en = d - 1;
    		int right_st = d;
			
			left[a]	= max(left[a], left_en);
			right[b] = min(right[b], right_st);

    	}
    }
    vector<int> diff(m + 2, 0);
    for (int i = 1; i <= n; i++) {
    	int left_en = left[i], right_st = right[i];
    	// cout << left_en << " " << right_st << "\n";
    	if (left_en and left_en >= right_st) {
    		diff[1] += 1;
    		diff[m + 1] -= 1;
    	}
    	else {
    		if (left_en) {
    			diff[1] += 1;
    			diff[left_en + 1] -= 1;
    		}

    		if (right_st != INT_MAX) {
    			diff[right_st] += 1;
    			diff[m + 1] -= 1;
    		}
    	}
    }

    for (int i = 1; i <= m; i++) {
    	diff[i] += diff[i - 1];
    }

    for (int i = 1; i <= m; i++) {
    	cout << diff[i] + st.size() << "\n";
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