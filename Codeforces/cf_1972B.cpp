#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int cnt = count(s.begin(), s.end(), 'U');

    if (cnt & 1) {
    	cout << "YES\n";
    }
    else {
    	cout << "NO\n"; 
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