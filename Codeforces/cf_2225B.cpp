#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;

    int cnt = 0, sz = s.size();
    for (int i = 0; i < sz - 1; ++i) {
        if (s[i] == s[i+1]) {
            cnt++;
        }
    }
    
    if (cnt <= 2) {
        cout << "YES" << endl;
    } 
    else {
        cout << "NO" << endl;
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