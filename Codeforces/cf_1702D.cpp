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

    curr -= p;

    // cout << curr << "\n";

    for (auto [key, val] : mp) {
        int p = key - 'a' + 1;
        int mn = min(val, (curr + p - 1) / p);
        mp[key] -= mn;
        curr -= p * mn;
        if (curr <= 0) {
            break;
        }

    }
    string ans = "";
    for (auto ch : s) {
        if (mp[ch] != 0) {
            ans += ch;
            mp[ch]--;
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
