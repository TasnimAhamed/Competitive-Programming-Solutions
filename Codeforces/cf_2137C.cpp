#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    unsigned long long a, b;
    cin >> a >> b;
    if(b&1) {
    	a *= b;
    	b = 1;
    	if((a + b) % 2 == 0) {
    		cout << (a + b) << "\n";
    	}
    	else{
    		cout << -1 << "\n";
    	}
    }
    else{˜åß
    	int cnt = 1;
    	unsigned long long mx = 0;
    	unsigned long long tmp = b;

    	while(tmp % 2 == 0 and tmp > 1) {
    		tmp /= 2;
    		cnt *= 2;
    		unsigned long long pw = b / cnt;
    		unsigned long long val = (a * pw) + cnt;
	    	unsigned long long val2 = (a * cnt) + pw;
	    	// cout << cnt << " " << pw << "\n";
	    	// cout << val << " " << val2 << "\n\n";
	    	if(val % 2 == 0  and val2 % 2 == 0) {
	    		mx = max({mx, val, val2});
	    	}
	    	else if(val % 2 == 0) {
	    		mx = max(mx, val);
	    	}
	    	else if(val2 %2 == 0) {
	    		mx = max(mx, val2);
	    	}
    	}

    	if(mx == 0) {
    		cout << -1 << "\n";
    	}
    	else{
    		cout << mx << "\n";
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