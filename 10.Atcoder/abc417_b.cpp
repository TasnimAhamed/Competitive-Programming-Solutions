#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    multiset<int> st;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	st.insert(x);
    }
    for (int i = 0; i < k; i++) {
    	int x; cin >> x;
    	auto it = st.find(x);
    	if(it != st.end()) {
    		st.erase(it);
    	}
    }
    for (auto x : st) {
    	cout << x << ' ';
    }
    cout << "\n";
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