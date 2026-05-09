#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    
    
    auto getPermutation = [&] (int n) {
    	if (n == 4) {
    		vector<int> per = {2, 1, 3, 4};
    		return per;
    	}
    	else if (n == 6) {
    		vector<int> per = {1, 2, 4, 6, 5, 3};
    		return per;
    	}

    	int lg = log2(n);
    	int y = (1 << lg);
    	cerr << y << "\n";

    	vector<int> per;
    	per.push_back(y);
    	per.push_back(y - 1);
    	per.push_back(y - 2);
    	per.push_back(3);
    	per.push_back(1);
    	for (int i = 2; i < y - 2; i++) {
    		if (i != 3) {
    			per.push_back(i);
    		}
    	}
    	for (int i = y + 1; i <= n; i++) {
    		per.push_back(i);
    	}
    	reverse(per.begin(), per.end());
    	return per;

    };
    
    if (n & 1) {
    	vector<int> per = getPermutation(n - 1);
    	cout << n << "\n";
    	for (auto x : per) {
    		cout << x << " ";
    	}
    	cout << n << "\n";
    }
    else {
    	vector<int> per = getPermutation(n);
    	int lg = __lg(n) + 1;
		int ans = (1 << lg) - 1;
		cout << ans << "\n";
    	for (auto x : per) {
    		cout << x << " ";
    	}
    	cout << "\n";
    }


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