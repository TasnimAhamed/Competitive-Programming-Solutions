#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> neg, pos, zero;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	if (x == 0) {
    		zero.push_back(x);
    	}
    	else if (x > 0) {
    		pos.push_back(x);
    	}
    	else {
    		neg.push_back(x);
    	}
    }

    if (pos.size() == 0) {
    	pos.push_back(neg.back());
    	neg.pop_back();
    	pos.push_back(neg.back());
    	neg.pop_back();
    }

    if (neg.size() % 2 == 0) {
    	zero.push_back(neg.back());
    	neg.pop_back();
    }

    cout << neg.size() <<  " ";
    for (auto x : neg){
    	cout << x << " ";
    }
    cout << "\n";

    cout << pos.size() <<  " ";
    for (auto x : pos){
    	cout << x << " ";
    }
    cout << "\n";

    cout << zero.size() <<  " ";
    for (auto x : zero){
    	cout << x << " ";
    }
    cout << "\n";


   	
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}