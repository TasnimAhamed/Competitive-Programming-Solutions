#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;
    string ss = s;
    sort(ss.begin(), ss.end());
    int cnt = count(s.begin(), s.end(),  s[0]);

    if (cnt == s.size()) {
    	cout << -1 << "\n";
    }
    else {
    	cout << ss << "\n";
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