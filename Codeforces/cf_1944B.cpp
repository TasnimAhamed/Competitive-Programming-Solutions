#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;

    map<int, int> left_mp, right_mp;
    for (int i = 1; i <= n; i++) {
    	int x; cin >> x;
    	left_mp[x]++;
    }
    for (int i = 1; i <= n; i++) {
    	int x; cin >> x;
    	right_mp[x]++;
    }

    deque<int> left_dq, right_dq;
    for (auto [key, val] : left_mp) {
    	if (val == 2) {
    		left_dq.push_front(key);
    		left_dq.push_front(key);
    	}
    	else {
    		left_dq.push_back(key);
    	}
    }
    for (auto [key, val] : right_mp) {
    	if (val == 2) {
    		right_dq.push_front(key);
    		right_dq.push_front(key);
    	}
    	else {
    		right_dq.push_back(key);
    	}
    }

    for (int i = 0; i < 2 * k; i++) {
    	cout << left_dq[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < 2 * k; i++) {
    	cout << right_dq[i] << " ";
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