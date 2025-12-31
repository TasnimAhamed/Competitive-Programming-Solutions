#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int mod = 998244353;

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n);

    for (auto &x : a) {
    	cin >> x;
    }
    for (auto &x : b) {
    	cin >> x;
    }

    int prev_a = 1, prev_b = 1;
    for (int i = 1; i < n; i++) {
    	int curr_a = 0, curr_b = 0;

    	// nibo na
    	for (int j = 0; j <= i; j++) {
    		int pval_a = (j == 0 ? a[i - 1] : b[i - 1]);
    		int pval_b = (j == 0 ? b[i - 1] : a[i - 1]);
    		int curr_aa = a[i];
    		int curr_bb = b[i];
    		if(pval_a <= curr_aa and pval_b <= curr_bb) {
    			curr_a = (curr_a + prev_a) % mod;
    		}
    	}

    	// nibo
    	for (int j = 0; j <= i; j++) {
    		int pval_a = (j == 0 ? b[i - 1] : a[i - 1]);
    		int pval_b = (j == 0 ? a[i - 1] : b[i - 1]);
    		int curr_aa = b[i];
    		int curr_bb = a[i];
    		if(pval_a <= curr_aa and pval_b <= curr_bb) {
    			curr_b = (curr_b + prev_b) % mod;
    		}
    	}

    	prev_a = curr_a;
    	prev_b = curr_b;
    }

    int total = (prev_a + prev_b) % mod;

    cout << total << "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}