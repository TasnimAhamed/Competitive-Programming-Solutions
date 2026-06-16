#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    vector<int> pref(n, -1), suff(n, -1);
    for (int i = 0; i < n; i++) {
    	cin >> v[i];
    	if (v[i] == 0) {
    		pref[i] = i;
    		suff[i] = i;
    	}
    }
    for (int i = 1; i < n; i++) {
    	if (pref[i] == -1) {
    		pref[i] = pref[i - 1];
    	}
    }
    for (int i = n - 2; i >= 0; i--) {
    	if (suff[i] == -1) {
    		suff[i] = suff[i + 1];
    	}
    }
    for (int i = 0; i < n; i++) {
    	if (v[i] == 0) {
    		cout << 0 << " ";
    		continue;
    	}
    	int lt = pref[i];
    	int rt = suff[i];
    	if (lt == -1) {
    		cout << (rt - i) << " ";
    	}
    	else if (rt == -1) {
    		cout << (i - lt) << " ";
    	}
    	else {
    		cout << min((rt - i), (i - lt)) << " ";
    	}
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