#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> even, odd;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	if (x & 1) {
    		odd.push_back(x);
    	}
    	else {
    		even.push_back(x);
    	}
    }

    if (even.size() >= 2) {
    	cout << even[0] << " " << even[1] << "\n";
    }
    else {
    	
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