#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (auto &x : v)  {
    	cin >> x;
    	mp[x]++;
    }
   
    for (auto [key, val] : mp) {
    	if(val % key != 0) {
    		cout << -1 << "\n";
    		return;
    	}
    }
    map<int,int> val;
    int cnt = 0;
    for (auto x : v) {
    	if(mp[x] and mp[x] % x == 0) {
    		++cnt;
    		cout << cnt << " ";
    		val[x] = cnt;
    		mp[x]--;
    	}
    	else{
    		cout << val[x] << " ";
    		mp[x]--;
    	}
    }
    cout << "\n";
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