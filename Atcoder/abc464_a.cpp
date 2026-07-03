#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;

    int e = count(s.begin(), s.end(), 'E');
    int w = count(s.begin(), s.end(), 'W');

    if (e > w) {
    	cout << "East\n";
    }
    else {
    	cout << "West\n";
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