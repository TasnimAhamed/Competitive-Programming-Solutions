#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    set<int> st;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	st.insert(x);
    }
    int ans = 0;
    for (auto x : st) {
    	if(x == ans) {
    		++ans;
    	}
    }

    cout << ans << "\n";
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