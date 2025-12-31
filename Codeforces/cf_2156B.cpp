#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, q; cin >> n >> q;
    string s; cin >> s;
    // cout << s << "\n";
    int cnt_a = count(s.begin(), s.end(), 'A');
    int cnt_b = count(s.begin(), s.end(), 'B');
    vector<int> v(q);
    for (auto &x : v) {
    	cin >> x;
    }
    for(auto x : v) {
    	if(cnt_a == n) {
    		cout << x << "\n";
    	}
    	else if(cnt_b == n) {
    		cout << (ll)ceil(log2(x + 1)) << "\n";
    	}
    	else{
    		ll sec = 0, i = 0;
    		while(x > 0) {
    			if(s[i] == 'A') {
    				--x;
    			}
    			else {
    				x /= 2;
    			}
    			++sec;
    			i++;
    			i %= n;
    		}
    		cout << sec << "\n";
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