#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;
    int k; cin >> k;
    int n = s.size();
    int ok = count(s.begin(), s.end(), '0');
    if (!ok) {
    	for (int i = k; i < n; i++) {
    		cout << s[i];
    	}
    	cout << "\n";
    }
    else {
    	cout << "I am coming\n";
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