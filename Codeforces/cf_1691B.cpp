#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (auto& x : v) {
    	cin >> x;
    	mp[x]++;
    }

    for (auto [key, val] : mp) {
    	if (val == 1) {
    		cout << -1 << "\n";
    		return;
    	}
    }

    int st = 0, en = 0;

    while(st < n) {
    	while (en < n and v[st] == v[en]) {
    		++en;
    	}
    	cout << en << ' ';
    	for (int i = st; i < en - 1; i++) {
    		cout << i + 1 << " ";
    	}
    	st = en;
    }
    cout << "\n";
    
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