#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<string> str(n);
    for (auto &x : str) {
    	cin >> x;
    }
    
    int ans = 0;
    for (int i = 0; i < (n + 1) / 2; i++) {
    	for (int j = 0; j < n / 2; j++) {    		
    		int new_i = i, new_j = j;
    		int old_j = new_j;

    		int sum = str[new_i][new_j] - '0';

    		new_j = n - new_i - 1;
    		new_i = old_j;
    		sum += str[new_i][new_j] - '0';

    		old_j = new_j;
    		new_j = n - new_i - 1;
    		new_i = old_j;
    		sum += str[new_i][new_j] - '0';
    		
    		old_j = new_j;
    		new_j = n - new_i - 1;
    		new_i = old_j;
    		sum += str[new_i][new_j] - '0';
    	
    		ans += min(sum, 4 - sum);
    	}
    }

    cout << ans << "\n";
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