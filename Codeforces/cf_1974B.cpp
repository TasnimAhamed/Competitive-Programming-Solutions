#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	string uni;
	for (auto ch : s) {
		if (uni.find(ch) == string::npos) {
			uni += ch;
		}
	}
	sort(uni.begin(), uni.end());
	map<char, char> mp;
	int len = uni.size();
	for (int i = 0; i < len / 2; i++) {
		mp[uni[i]] = uni[len - i - 1];
		mp[uni[len - i - 1]] = uni[i];
	}
	if (len & 1) {
		mp[uni[len / 2]] = uni[len / 2];
	}
	for (int i = 0; i < n;  i++) {
		s[i] = mp[s[i]];
	}

	cout << s << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}