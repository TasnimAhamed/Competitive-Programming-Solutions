#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;
    vector<int> cp, sm;
    vector<int> rm(s.size(), 1);
    for (int i = 0; i < s.size(); i++) {
        auto ch = s[i];
        if (ch == 'B' or ch == 'b') {
            if (ch == 'B' and cp.size()) {
                int idx = cp.back();
                rm[idx] = 0;
                cp.pop_back();
            }
            else if (ch == 'b' and sm.size()) {
                int idx = sm.back();
                rm[idx] = 0;
                sm.pop_back();
            }
        }
        else {
            if (isupper(ch)) {
                cp.push_back(i);
            }
            else {
                sm.push_back(i);
            }
        }
    }

    string ans = "";
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == 'B' or s[i] == 'b') {
            continue;
        }
        else if (rm[i]) {
            ans += s[i];
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