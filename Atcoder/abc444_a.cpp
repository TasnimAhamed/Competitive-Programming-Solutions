#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s;  cin >> s;
    if (s[0] == s[1] and s[1] == s[2]) {
    	cout << "Yes\n";
    }
    else {
    	cout << "No\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}