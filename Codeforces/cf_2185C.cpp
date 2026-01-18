#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
    	cin >> v[i];
    }

    sort(v.begin(), v.end());

	int mx = 1, cnt = 1;
	for (int i = 1; i < n; i++) {
	    if (v[i] == v[i - 1]) {
	        continue;
	    }
	    else if (v[i] == v[i - 1] + 1) {
	        cnt++;
	    }
	    else {
	        mx = max(mx, cnt);
	        cnt = 1;
	    }
	}
	mx = max(mx, cnt);

	cout << mx << "\n";

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