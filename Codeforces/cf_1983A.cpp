#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	
    int n; cin >> n;
    vector<int> v(n + 1, 1);
    v[0] = 1;
    for (int i = 2; i <= n; i++) {
    	for (int j = i; j <= n; j += i) {
    		if (v[j] % i != 0) {
	    		v[j] *= i;
	    	}
    	}
    }

    for (int i = 1; i <= n; i++) {
    	cout << v[i] << (i == n ? "\n" : " ");
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