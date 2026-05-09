#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    bool first = true;
    while (cin >> n) {
    	vector<string> name(n);
    	for (auto &s : name) {
    		cin >> s;
    	}
    	map<string, int> mp;
    	for (int i = 0; i < n; i++) {
    		string new_name; cin >> new_name;
    		int money_spent; cin >> money_spent;

    		int m; cin >> m;
    		if (m > 0){
    			int per = money_spent / m;
	    		int rem = money_spent % m;

	    		mp[new_name] += (-money_spent + rem);
	    		for (int i = 0; i < m; i++) {
	    			string s; cin >> s;	    			
	    			mp[s] += per;
	    		}	
    		}
    	}

    	if (!first) {
    		cout << "\n";
    	}
    	first = false;

    	for (auto s : name) {
    		cout << s << " " << mp[s] << "\n"; 
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