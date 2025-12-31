#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, a, b; cin >> n >> a >> b;
    
    if(2 * (a + b) <= n) {
    	cout << 1 << "\n";
    }
    else{
    	int ans = 0;
    	int cut = n / a;
    	if(cut >= 2) {
    		ans = 1;
    		n -= (cut * a);
    	}
    	else {
    		ans = 1
    	}
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