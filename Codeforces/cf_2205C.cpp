#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {

	int n; cin >> n;
	set<vector<int>> all;

	for (int i = 0; i < n; i++) {
		int m; cin >> m;
		vector<int> v(m);		
		for (auto &x : v) {
			cin >> x;
		}
		reverse(v.begin(), v.end());

		set<int> st;
		vector<int> curr;
		for (auto x : v) {
			if (st.find(x) == st.end()) {
				st.insert(x);
				curr.push_back(x);
			}
		}
		all.insert(curr);
	}

	vector<int> ans;
	while(!all.empty()) {
		vector<int> v = *all.begin();
		all.erase(all.begin());
		for (auto x : v) {
			ans.push_back(x);
		}
		set<int> tmp(v.begin(), v.end());
		auto new_all = all;
		all.clear();
		for (auto it : new_all) {
			vector<int> curr;
			for (auto it2 : it) {
				if (!tmp.count(it2)) {
					curr.push_back(it2);
				}
			}
			all.insert(curr);
		}
	}

	for (auto x : ans) {
		cout << x << " ";
	}
	cout << "\n";
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