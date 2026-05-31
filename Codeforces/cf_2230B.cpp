#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;
    int sz = s.size();

    vector<int> pref1(sz + 1, 0), pref2(sz + 1, 0);

    for (int i = 0; i < sz; i++) {
        pref1[i + 1] = pref1[i] + (s[i] == '2');
        pref2[i + 1] = pref2[i] + (s[i] == '1' || s[i] == '3');
    }

    int ans = 0;
    for (int i = 0; i <= sz; i++) {
        int cnt = pref1[i] + (pref2[sz] - pref2[i]);
        ans = max(ans, cnt);
    }

    cout << (sz - ans) << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}