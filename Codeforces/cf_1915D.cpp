#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    if (n == 1) {
    	cout << s << "\n";
    	return;
    }

    vector<string> words;
    int i = n - 1; 
    while (i >= 0) {
    	string word = "";
    	word = s[i] + word;
		--i;
		if (i >= 0) {
			word = s[i] + word;
			--i;
		}

    	if (i >= 0 and s[i + 2] != 'a' and s[i + 2] != 'e') {
    		word = s[i] + word;
    		--i;
    	}

    	words.push_back(word);
    }

    string ans = "";
    for (int i = words.size() - 1; i >= 0; i--) {
    	ans += words[i];
    	if (i > 0) {
    		ans += ".";
    	}
    }

    cout << ans << "\n";
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