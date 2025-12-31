#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s, t; cin >> s >> t;
    map<char, vector<int>> mp;
    for (int i = 0; i < s.size(); i++) {
    	mp[s[i]].push_back(i);
    }
    // for (auto [key, v] : mp) {
    // 	cout << key << " : ";
    // 	for (auto x : v) {
    // 		cout << x << " ";
    // 	}
    // 	cout << "\n";
    // }
    // cout << "\n\n";
    int cnt[26]= {0};
    for (int i = 0; i < t.size(); i++) {
    	cnt[t[i] - 'A']++;
    }
    int prev = -1;
    for (int i = 0; i < t.size(); i++) {
    	if(mp[t[i]].size() == 0){
    		cout << "NO\n";
    		return;
    	}
    	int cnt_t = cnt[t[i] - 'A'];
    	if(cnt_t > mp[t[i]].size()) {
    		cout << "NO\n";
    		return;
    	} 
    	int last_idx = mp[t[i]][mp[t[i]].size() - cnt_t];
    	cnt[t[i] - 'A']--;
    	// cout << t[i] << " : " << last_idx << "\n";
    	if(last_idx < prev) {
    		cout << "NO\n";
    		return;
    	}
    	prev = last_idx;
    }
    cout << "YES\n";
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