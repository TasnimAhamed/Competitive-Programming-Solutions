#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    
    for(int mask = 0; mask < (1 << n); mask++) {
    	ll sum = 0;
    	for(int i = 0; i < n; i++){
    		if((mask >> i) & 1){
    			sum += v[i];
    		}
    		else{
    			sum -= v[i];
    		}
    	}
    	if(sum%360 == 0){
    		puts("Yes");
    		return;
    	}
    }
    puts("No");
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;

}