#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    auto getString = [&] (int n) {
    	int k = 1;
    	while ((k * (k + 1) / 2) <= n) {
    		++k;
    	}
    	--k;
    	string ans(k, 'a');

    	return ans;
    };

    while (n > 0) {
    	string str = getString(n);
    	int sz = str.size();
    	n -= (sz * (sz + 1) / 2);
    	cout << str << " ";
    }
    cout << "\n";
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