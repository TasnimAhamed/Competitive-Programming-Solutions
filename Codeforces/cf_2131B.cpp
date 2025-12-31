#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    
    if(n%2 == 0) {
    	for (int i = 1; i < n; i++) {
    		if(i&1) {
    			cout << -1 << " ";
    		}
    		else{
    			cout << 3 <<  " ";
    		}
    	}
    	cout << 2 << "\n";
    }
    else{
    	for (int i = 1; i <= n; i++) {
    		if(i&1) {
    			cout << -1 << " ";
    		}
    		else{
    			cout << 3 <<  " ";
    		}
    	}
    	cout << "\n";

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