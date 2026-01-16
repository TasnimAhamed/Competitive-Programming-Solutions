#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool checkPalindrome(string s) {
	int n = s.size();
	for (int i = 0; i < n / 2; i++) {
		if(s[i] != s[n - 1 - i]) {
			return false;
		}
	}

	return true;
}

void solve() {
    int n; cin >> n;
    vector<string> v(n);

    for (auto &s : v) {
    	cin >> s;
    }

    for (auto s : v) {
    	if(checkPalindrome(s)) {
    		cout << "yes\n";
    		continue;
    	}
    	int len = s.size();
    	int paisi = 0;
    	for (int i = 0; i < len - 1; i++) {
    		if(s[i] == s[i + 1]) {
    			cout << "yes\n";
    			paisi = 1;
    			break;
    		}
    	}

    	for (int i = 0; i < len - 2; i++) {
    		if(s[i] == s[i + 2]) {
    			cout << "yes\n";
    			paisi = 1;
    			break;
    		}
    	}

    	if(!paisi) {
    		cout << "no\n";
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