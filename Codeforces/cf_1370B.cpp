#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<array<int, 2>> odd, even;
    for (int i = 0; i < 2 * n; i++) {
    	int x; cin >> x;
    	if (x & 1) {
    		odd.push_back({i + 1, x});
    	}
    	else {
    		even.push_back({i + 1, x});
    	}
    }

    int len = n - 1;
    for (int i = 0; i < (int)odd.size() - 1; i += 2) {
    	if (!len) {
    		break;
    	}
    	cout << odd[i][0] << " " << odd[i + 1][0] << "\n";
    	--len;
    }
    for (int i = 0; i < (int)even.size() - 1; i += 2) {
    	if (!len) {
    		break;
    	}
    	cout << even[i][0] << " " << even[i + 1][0] << "\n";
    	--len;
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