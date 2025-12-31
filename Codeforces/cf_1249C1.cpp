#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<int> cmb;

void pre() {
	vector<int> vals;
    int ff = 1;
    while(ff <= 1e4) {
    	vals.push_back(ff);
    	ff *= 3;
    }
    vals.push_back(ff);
    int sz = vals.size();
    for (int mask = 0; mask < (1 << sz); mask++) {
    	int tmp = 0;
    	for (int j = 0; j < sz; j++) {
    		if(mask & (1 << j)) {
    			tmp += vals[j];
    		}
    	}
    	cmb.push_back(tmp);
    }

}

void solve() {
	
    int n; cin >> n;
    int idx = lower_bound(cmb.begin(), cmb.end(), n) - cmb.begin();
    cout << cmb[idx] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    pre();
    
    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}