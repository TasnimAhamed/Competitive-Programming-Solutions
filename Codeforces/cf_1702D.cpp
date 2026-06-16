#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;
    int p; cin >> p;

    map<char, int, greater<char>> mp;
    int curr = 0;
    for (auto ch : s) {
    	mp[ch]++;
    	curr += (ch - 'a' + 1);
    }

    if (curr <= p) {
    	cout << s << "\n";
    	return;
    }

    for (auto [key, val] : mp) {
    	cout << key << " " << val << "\n";
    }
    cout << curr << "\n";
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