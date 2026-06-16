#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	mp[x]++;
    }
    int cnt = 0, extra = 0;
    for (auto [key, val] : mp) {
    	if (val == 1) {
    		++cnt;
    	}
    	else {
    		extra++;
    	}
    }
    
    if (cnt & 1) {
    	int points = ((cnt + 1) / 2) * 2;
    	points += extra;
    	cout << points << "\n";
    }
    else {
    	int points = cnt;
    	points += extra;
    	cout << points << "\n";
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