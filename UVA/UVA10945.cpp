#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s;
    while (true) {
    	getline(cin, s);
    	if (s == "DONE") {
    		break;
    	}
    	string ans, tmp;
    	for (auto ch : s) {
    		if (ispunct(ch) or isspace(ch)) {
    			continue;
    		}
    		ans += tolower(ch);
    		tmp += tolower(ch);
    	}
    	reverse(tmp.begin(), tmp.end());

    	if (tmp == ans) {
    		cout << "You won't be eaten!\n";
    	}
    	else {
    		cout << "Uh oh..\n";
    	}

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