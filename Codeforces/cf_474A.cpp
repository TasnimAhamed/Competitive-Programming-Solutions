#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
	map<char, int> mp;
	for (int i = 0; i < s.size(); i++) {
		mp[s[i]] = i;
	}
	char ch; cin >> ch;
	string in; cin >> in;
	for (int i = 0; i < in.size(); i++) {
		if (ch == 'R') {
			int idx = mp[in[i]];
			in[i] = s[idx - 1];
		}
		else{
			int idx = mp[in[i]];
			in[i] = s[idx + 1];
		}
	}

	cout << in << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }
    return 0;
}