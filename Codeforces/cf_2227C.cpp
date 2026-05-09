#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n), two, three, both, none;    
    for (auto &x : v) {
    	cin >> x;
    	if (x % 2 == 0 and x % 3 == 0) {
    		both.push_back(x);
    	}
    	else if (x % 2 == 0) {
    		two.push_back(x);
    	}
    	else if (x % 3 == 0) {
    		three.push_back(x);
    	}
    	else {
    		none.push_back(x);
    	}
    }
  	
  	vector<int> res;
    for (int x : both) {
    	res.push_back(x);
    }
    for (int x : two) {
    	res.push_back(x);
    }
    for (int x : none) {
    	res.push_back(x);
    }
    for (int x : three) {
    	res.push_back(x);
    }

    for (int i = 0; i < n; i++) {
        cout << res[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";

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