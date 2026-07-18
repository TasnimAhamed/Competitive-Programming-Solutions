#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<string> v(n);
    map<string, bool> mp;
    for (int i = 0; i < n; i++) {
    	cin >> v[i];
    	mp[v[i]] = 1;
    }

    string ans = "";
    for (int i = 0; i < n; i++) {
    	int paisi = 0;
    	for (int j = 1; j < v[i].size(); j++) {
    		string pref = v[i].substr(0, j);
    		string suff = v[i].substr(j);
    		// cout << pref << " " << suff << "\n";
    		if (mp[pref] and mp[suff]) {
    			paisi = 1;
    			break;
    		}
    	}
    	ans += to_string(paisi);
    }
    cout << ans << "\n";
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