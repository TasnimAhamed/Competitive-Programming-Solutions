#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
ll inv = 0;
vector<int> v;

vector<int> merge(vector<int> &left, vector<int> &right) {
	vector<int> ans;
	int n = left.size();
	int m = right.size();
	int i = 0, j = 0;

	while (i < n and j < m) {
		if (left[i] < right[j]) {
			ans.push_back(left[i]);
			++i;
		}
		else {
			ans.push_back(right[j]);
			if(left[i] > right[j]) {
				inv += (n - i);
			}
			++j;
		}
	}

	while (i < n) {
		ans.push_back(left[i]);
		++i;
	}

	while (j < m) {
		ans.push_back(right[j]);
		++j;
	}

	return ans;
}

vector<int> merge_sort(int l, int r) {
	if (l == r) {
		return {v[l]};
	}

	int mid = (l + r) / 2;
	vector<int> L = merge_sort(l, mid);
	vector<int> R = merge_sort(mid + 1, r);

	return merge(L, R);
}

void solve() {
  
    while (cin >> n && n) {
    	for (int i = 0; i < n; i++) {
    		int x; cin >> x;
    		v.push_back(x);
    	}

    	vector<int> ans = merge_sort(0, n - 1);

    	// for (auto x : ans) {
    	// 	cout << x << " ";
    	// }
    	// cout << "\n";

    	cout << inv << "\n";
    	inv = 0;
    	v.clear();
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