#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;
	int sz = s.size();

	// cout << s << "\n";

	int freq[26] = {0};
	for (auto ch : s) {
	    freq[ch - 'a']++;
	}

    for (auto x : freq) {
    	if (x > (sz + 1) / 2) {
    		cout << "No" << "\n";
    		return;
    	}
    }

    priority_queue<pair<int, char>> pq;
    for (int i = 0; i < 26; i++) {
    	if (freq[i]) {
    		pq.push({freq[i], char('a' + i)});
    	}
    }
    string ans = "";
    while (pq.size() >= 2) {
        auto [f1, c1] = pq.top(); pq.pop();
        auto [f2, c2] = pq.top(); pq.pop();

        ans.push_back(c1);
        ans.push_back(c2);

        if (f1 - 1 > 0) {
        	pq.push({f1 - 1, c1});
        }
        if (f2 - 1 > 0) {
        	pq.push({f2 - 1, c2});
        }
    }

    if (!pq.empty()) {
        ans.push_back(pq.top().second);
    }

    cout << "Yes\n";
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