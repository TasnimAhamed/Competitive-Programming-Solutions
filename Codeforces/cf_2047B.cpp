#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    if (n == 1) {
    	cout << s << "\n";
    	return;
    }
    vector<int> freq(26);
    for (auto ch : s) {
    	freq[ch - 'a']++;
    }
    pair<pair<int, char>, int> low, high;
    low = high = {{freq[s[0] - 'a'], s[0]}, 0};
    for (int i = 1; i < n; i++) {
    	low  = min(low, {{freq[s[i] - 'a'], s[i]}, i});
    	high = max(high, {{freq[s[i] - 'a'], s[i]}, i});
    }

    cerr << low.first.first << " " << low.first.second << " " << low.second << "\n";
    cerr << high.first.first << " " << high.first.second << " " << high.second << "\n";

	s[low.second] = s[high.second];
	
	cout << s << "\n";    

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