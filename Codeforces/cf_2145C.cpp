#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    vector<int> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
    	pref[i + 1] = pref[i];
    	if(s[i] == 'a') {
    		pref[i + 1]++;
    	}
    	else{
    		pref[i + 1]--;
    	}
    }
    // for (auto x : pref) {
    // 	cout << x << " ";
    // }
    // cout << "\n";
    if(pref[n] == 0) {
    	cout << 0 << "\n";
    	return;
    }
    map<int, int> mp;
    mp[0]=0;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++) {
		int ff = pref[i + 1] - pref[n];
		if(mp.count(ff)) {
			int idx = (i + 1) - mp[ff];
			if(idx < n) {
				mn = min(mn, idx);
			}
		}
		if(!mp.count(pref[i + 1])) {
    		mp[pref[i + 1]] =  i + 1;
    	}    	
    }

    if(mn == INT_MAX){
    	cout << -1 << "\n";
    }
    else {
    	cout << mn << "\n";
    }
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