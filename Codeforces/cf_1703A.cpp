#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;
    transform(s.begin(), s.end(), s.begin(), [] (char ch) {
    	return tolower(ch);
    });

    cout << (s == "yes" ? "YES\n" : "NO\n"); 
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