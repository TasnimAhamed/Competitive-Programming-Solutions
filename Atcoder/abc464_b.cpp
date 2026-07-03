#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	 int h, w; cin >> h >> w;
	 vector<string> s(h);
	 for (auto& r : s) {
	 	cin >> r;
	 }

	 for (int i = 0; i < h; i++) {
	 	int cnt = count(s[i].begin(), s[i].end(), '.');
	 	if (cnt == w) {
	 		for (int j = 0; j < w; j++) {
	 			s[i][j] = '?';
	 		}
	 	}
	 	else {
	 		break;
	 	}
	 }

	 for (int i = h - 1; i >= 0; i--) {
	 	int cnt = count(s[i].begin(), s[i].end(), '.');
	 	if (cnt == w) {
	 		for (int j = 0; j < w; j++) {
	 			s[i][j] = '?';
	 		}
	 	}
	 	else {
	 		break;
	 	}
	 }



	 for (int i = 0; i < w; i++) {
	 	int cnt = 0;
	 	for (int j = 0; j < h; j++) {
	 		if (s[j][i] == '.' or s[j][i] == '?') {
	 			++cnt;
	 		}
	 	}
	 	if (cnt == h) {
	 		for (int j = 0; j < h; j++) {
		 		s[j][i] = '?';
		 	}	
	 	}
	 	else {
	 		break;
	 	}
	 }

	 

	 for (int i = w - 1; i >= 0; i--) {
	 	
	 	int cnt = 0;
	 	for (int j = 0; j < h; j++) {
	 		if (s[j][i] == '.' or s[j][i] == '?') {
	 			++cnt;
	 		}
	 	}
	 	if (cnt == h) {
	 		for (int j = 0; j < h; j++) {
		 		s[j][i] = '?';
		 	}	
	 	}
	 	else {
	 		break;
	 	}
	 }

	 for (auto r : s) {
	 	string ans = "";
	 	for (auto ch : r) {
	 		if (ch != '?') {
	 			ans += ch;
	 		}
	 	}
	 	if (ans.size()) {
	 		cout << ans << "\n";
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