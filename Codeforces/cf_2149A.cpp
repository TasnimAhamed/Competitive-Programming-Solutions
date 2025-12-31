#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    
    int ans = 0, neg = 0;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	if(x == -1) {
    		++neg;
    	} 
    	else if(x == 0) {
    		++ans;
    	}
    }
    if(neg&1) {
    	ans += 2;
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