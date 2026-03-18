#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;
    int n = s.size();
    int upper_count = 0;
    for (int i = 0; i < n; i++) {
    	if (isupper(s[i])) {
    		++upper_count;
    	}
    }
    // cout << upper_count << "\n";

    if (upper_count == n) {
    	for (int i = 0; i < n; i++) {
    		s[i] = tolower(s[i]);
    	}
    }
    else if (islower(s[0]) and upper_count == n - 1) {
    	s[0] = toupper(s[0]);
    	for (int i = 1; i < n; i++) {
    		s[i] = tolower(s[i]);
    	}
    }
    
    cout << s << "\n";
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