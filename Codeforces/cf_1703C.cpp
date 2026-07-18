#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }

    for (int i = 0; i < n; i++) {
    	int m; cin >> m;
    	string s; cin >> s;
    	for (int j = 0; j < m; j++) {
    		if (s[j] == 'U') {
    			if (v[i] == 0) {
    				v[i] = 9;
    			}
    			else {
    				v[i]--;
    			}
    		}
    		else {
    			if (v[i] == 9) {
    				v[i] = 0;
    			}
    			else {
    				v[i]++;
    			}
    		}
    	}
    }

    for (auto x : v) {
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