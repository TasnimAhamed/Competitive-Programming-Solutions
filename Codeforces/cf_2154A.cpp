#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;

    int curr = -k, cnt = 0;
    for (int i = 0; i < n; i++) {
    	if(s[i] == '1') {
    		if((i - curr) >= k) {
    			++cnt;
    		}
    		curr = i;
    	}
    }
    cout << cnt << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}