#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0;

    auto is_vowel = [&] (char ch) {
    	if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u') {
    		return true;
    	}
    	return false;
    };

    for (auto ch : s) {
    	if(!is_vowel(ch)) {
    		++cnt;
    	}
    	else{
    		cnt = 0;
    	}
    	if(cnt == 4) {
    		cout << "NO\n";
    		return;
    	}
    }
    if(cnt == 4) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
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