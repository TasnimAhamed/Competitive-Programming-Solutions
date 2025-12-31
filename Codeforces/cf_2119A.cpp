#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    if(a > b) {
    	if((a - b) == 1 and a&1) {
    		cout << y << "\n";
    	}
    	else{
    		cout << -1 << "\n";
    	}
    }
    else{
    	if(x <= y) {
    		cout << (b - a) * x << "\n";
    	}
    	else {
    		int even = 0, odd = 0;
    		for (int i = a; i < b; i++) {
    			if(i&1) {
    				++odd;
    			}
    			else{
    				++even;
    			}
    		} 

    		cout << (even * y + odd * x) << "\n";
    	}
    }
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