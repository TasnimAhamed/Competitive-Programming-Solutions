#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> div;
    set<int> st;
    for (int i = 2; i * i <= n; i++){
    	if(n % i == 0) {
    		div.push_back(i);
    		st.insert(i);
    		if(n / i != i) {
    			div.push_back(n/i);
    			st.insert(n / i);
    		}
    	}  	
    }
    for (int i = 0; i < div.size(); i++) {
    	for (int j = i + 1; j < div.size(); j++) {
    		int ff = div[i];
    		int ss = div[j];
    		int tt = n / (1LL * ff * ss);
    		if(ff != ss and ss != tt and ff != tt and st.find(tt) != st.end()){
    			cout << "YES\n";
    			cout << ff << " " << ss << " " << tt << "\n";
    			return;
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
    while (t--){
        solve();
    }

    return 0;
}