#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int left = 0, right = 0, ans = 0;
    for (auto x : s) {
    	if(x == '<') {
    		++left;
    		ans = max(right, ans);
    		right = 0;
    	}
    	else {
    		++right;
    		ans = max(left, ans);
    		left = 0;
    	}
    }
    ans = max({ans, left, right});

    cout << ans + 1 << "\n";
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