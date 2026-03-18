#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
   int n; cin >> n;
   vector<int> v(n);
   map<int, int> mp;
   for (int i = 1; i <= n; i++) {
   	mp[i] = 2;
   }
   for (auto &x : v) {
   	cin >> x;
   	mp[x]--;
   }
   
   if(mp[v[0]] == 1) {
   		cout << 0 << "\n";
	   for(auto [key, val] : mp) {
	   	if(key != v[0]) {
	   		cout << key << " ";
	   	}
	   }
	   cout << v[0] << "\n";
   }
   else{
	   	cout << 1 << "\n";
		int pos = -1, idx = -1;
		for (int i = 1; i <= n; i++) {
			if(v[i-1] == v[0]) {
				pos = i;
			}
			if(mp[i] == 2) {
				idx = i;
			}
		}
		for (int i = 1; i <= n; i++) {		
			int val = mp[i];
			while(val--) {
				cout << i << " ";
			}
		}
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
