#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (auto &x : v) {
    	cin >> x;
    	x %= 10;
    	mp[x]++;
    }
    for (int i = 0; i < n; i++) {
    	int ff = v[i];
    	for (int j = 0; j < 10; j++) {
    		for (int k = 0; k < 10; k++) {
    			if (ff == j and j == k) {
    				int sum = ff * 3;
    				if (sum % 10 == 3 and mp[ff] >= 3) {
    					cout << "YES\n";
    					return;
    				}
    			}
    			else if (ff == j and ff != k) {
    				int sum = ff * 2 + k;
    				if (sum % 10 == 3 and mp[ff] >= 2 and mp[k]) {
    					cout << "YES\n";
    					return;
    				}
    			}
    			else if (ff == k and ff != j) {
    				int sum = ff * 2 + j;
    				if (sum % 10 == 3 and mp[ff] >= 2 and mp[j]) {
    					cout << "YES\n";
    					return;
    				}
    			}
    			else if (ff != j and j == k) {
    				int sum = ff + 2 * k;
    				if (sum % 10 == 3 and mp[ff] and mp[j] >= 2) {
    					cout << "YES\n";
    					return;
    				}
    			}
    			else if (mp[ff] and mp[j] and mp[k]) {    				
    				int sum = ff + j + k;
    				if (sum % 10 == 3) {
    					cout << "YES\n";
    					return;
    				}
    			}
    		}
    	}
    }

    cout << "NO\n";
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