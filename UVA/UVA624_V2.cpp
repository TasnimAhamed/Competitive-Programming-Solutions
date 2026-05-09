#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int w;
	while (cin >> w) {
		int n; cin >> n;
		vector<int> v(n);

		for (auto &x : v) {
			cin >> x;
		}
		int mxDiff = INT_MAX, mxLen = 0;
		vector<int> ans(n);
		for (int i = 0; i < (1 << n); i++) {
			int sum = 0;
			int len = 0;
			for (int j = 0; j < n; j++) {
				if ((i >> j) & 1) {
					sum += v[j];
				}
			}
			if (sum <= w and (w - sum) <= mxDiff) {
				for (int j = 0; j < n; j++) {
					if ((i >> j) & 1) {
						ans[len++] = v[j];	
					}
				}
				mxDiff = w - sum;
				mxLen = len;
			}
		}
		cerr << "Len: " << mxLen << "\n";
		int sum = 0;
    	for (int i = 0; i < mxLen; i++) {
    		cout << ans[i] << " ";
    		sum += ans[i];
    	}
    	cout <<"sum:" << sum << "\n";
	}

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;
}