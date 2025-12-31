#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    
    string ans = "";
    int zero = n - k;
    
    if(k){
    	ans += "1";
    }
    if(zero > 1){
    	for (int i = 1; i < zero; i++) {
	    	ans += "0";
	    }
    }
    
    for (int i = 1; i < k; i++) {
    	ans += "1";
    }
    if(zero) {
    	ans += "0";
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;

}