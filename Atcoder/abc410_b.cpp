#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, q; cin >> n>> q;
    vector<int> v(q), idx(n+1, 0);
    for (auto &x : v) {
    	cin >> x;
    }
    for (int i = 0; i < q; i++) {
    	if (v[i] == 0) {
    		int mn = idx[1], pos = 1;
    		for (int j = 2; j <= n; j++) {
    			if (idx[j] < mn) {
    				mn = idx[j];
    				pos = j;
    			}
    		}
    		cout << pos << " ";
    		idx[pos]++; 
    	}
    	else{
    		cout << v[i] << " ";
    		idx[v[i]]++;
    	}
    }
    cout << "\n";
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