#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve() {
    int n, w; cin >> n >> w;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
    	cin >> v[i];
    }

    if(w == 1) {
    	cout << n << "\n";
    }
    else{
    	int ans = 0;
        set<int> st;
    	for (int i = 1; i <= n; i++) {
    		if(i > w) {
                st.erase(v[i - w]);
            }
            st.insert(v[i]);
            int mn = *st.begin();
            int mx = *prev(st.end());
            if( i >= w and mx - mn == w - 1) {
                ++ans;
            }
    	}

    	cout << ans << "\n";
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;
}


