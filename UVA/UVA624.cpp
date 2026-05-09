#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 50;

vector<int> v;
vector<int> vis(N);
vector<int> ans(N);
int w, n, mxLen, maxDiff;

void get_ans(int i) {
	if (i > n) {
		return;
	}
	if (i == n) {
		int sum = 0;
		for (int i = 0; i < n; i++) {
			if (vis[i]) {
				sum += v[i];
			}
		}
		if (sum <= w and (w - sum) <= maxDiff) {
			int len = 0;
			for (int i = 0; i < n; i++) {
				if (vis[i]) {
					ans[len++] = v[i];
				}
			}
			mxLen = len;
			maxDiff = w - sum;
		}
		return;
	}

	vis[i] = true;
	get_ans(i+ 1);

	vis[i] = false;
	get_ans(i + 1);
}

void solve() {
	
    while (cin >> w) {
    	cin >> n;
    	mxLen = n;
    	maxDiff = INT_MAX;
    	vis.assign(N, false);

    	for (int i = 0; i < n; i++) {
    		int x; cin >> x;
    		v.push_back(x);
    	}

    	get_ans(0);
    	int sum = 0;
    	for (int i = 0; i < mxLen; i++) {
    		cout << ans[i] << " ";
    		sum += ans[i];
    	}
    	cout <<"sum:" << sum << "\n";
    	v.clear();
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