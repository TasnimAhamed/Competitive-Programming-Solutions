#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool check_vowel(char ch) {
	ch = tolower(ch);
	if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u') {
		return true;
	}
	return false;
}

void count_vowels(string s, int sz, int cnt) {
	if (check_vowel(s[sz])) {
		++cnt;
	}
	if (sz == 0) {
		cout << cnt << "\n";
		return;
	}
	count_vowels(s, sz - 1, cnt);
}

void solve() {
    string s;
    getline(cin, s);

    count_vowels(s, s.size() - 1, 0);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;

}