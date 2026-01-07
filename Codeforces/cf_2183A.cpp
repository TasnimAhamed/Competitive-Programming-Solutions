#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    int one = 0, zero = 0;
    int cnt1 = 0, cnt0 = 0;
    for (int i = 0; i < n; i++) {
    	if(v[i] == 0) {
    		cnt0++;
    		if(cnt1) {
    			++one, cnt1 = 0;
    		}
    	}
    	else {
    		++cnt1;
    		if(cnt0) {
    			++zero, cnt0 = 0;
    		}
    	}
    }
    if(cnt0) {
    	++zero;
    }
    else{
    	++one;
    }
    // cout << zero << " " << one << "\n";
    if(one >= zero) {
    	cout << "Alice\n";
    }
    else{
    	cout << "Bob\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}