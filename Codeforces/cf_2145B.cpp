#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    	
    int zero = 0, one = 0, two = 0;
    for (auto ch : s) {
    	if(ch == '0') {
    		++zero;
    	}
    	else if(ch == '1') {
    		++one;
    	}
    	else{
    		++two;
    	}
    }

    int top_mn = zero, top_mx = zero + two;
    int bottom_mn = k - top_mx, bottom_mx = k - top_mn;

    // cout << top_mn << " " << top_mx << "\n";
    // cout << bottom_mn << " " << bottom_mx << "\n";

    string ans = "";
    for (int i = 1; i <= n; i++) {
    	if(n == k) {
    		ans += "-";
    	}
    	else if(i <= top_mn or (n - i + 1) <= bottom_mn) {
    		ans += "-";
    	}
    	else if(i > top_mx and (n - i + 1) > bottom_mx) {
    		ans += "+";
    	}
    	else{
    		ans += "?";
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