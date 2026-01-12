#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int s, k, m; cin >> s >> k >> m;

	int ff = m / k;
	int ee = m % k;

	int rem = 0;
	if (k >= s) {
	    rem = s;
	} 
	else {
	    if (ff % 2 == 0) {
	    	rem = s;
	    }
	    else {
	    	rem = k;
	    }
	}

	int answer = max(0, rem - ee);
	cout << answer << "\n";

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