#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }

    // vector<pair<int,int>> vv; 

    // for (int i = 0; i < n; i++) {
    //     int val = 100 / v[i];
    //     vv.push_back({val, v[i]});
    // }

    // sort(vv.begin(), vv.end());

    bool ok = false;
	for(int i = 0; i < n; i++)
	    if(v[i] == 100) {
	    	ok = true;
	    }

	cout << (ok ? "Yes\n" : "No\n"); 
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