#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n + 1), idx(n + 1, 0);
    for(int i = 1; i <= n; i++) {
    	cin >> v[i];
    	idx[v[i]]++;
    }
    set<int> st;
    for (int i = 1; i <= n; i++) {
    	if(idx[i] == 0) {
    		st.insert(i);
    	}
    }
    
    auto it = st.begin(); 
    for (int i = n; i >= 1; i--) {
    	if(v[i] == 0) {
    		v[i] = *it;
    		++it;
    	}
    }    

    int i = 1, j = n;
    int l = -1, r = -1;
    for (int i = 1; i <= n; i++) {
    	if(v[i] != i ) {
    		if(l == -1) {
    			l = i;
    		}
    		r = i;
    	}
    }
    
    if(l == -1 and r == -1) {
    	cout << 0 << "\n";
    }
    else{
    	cout << (r - l + 1) << "\n";
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