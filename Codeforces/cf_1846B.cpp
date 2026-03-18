#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	string s[3];
	for (auto &x : s) {
		cin >> x;
	}
	for (int i = 0; i < 3; i++) {
		if (s[i][0] != '.' and s[i][0] == s[i][1] and s[i][1] == s[i][2]) {
			cout << s[i][0] << "\n";
			return;
		}
	}
	for (int i = 0; i < 3; i++) {
		if (s[0][i] != '.' and s[0][i] == s[1][i] and s[1][i] == s[2][i]) {
			cout << s[0][i] << "\n";
			return;
		}
	}

	if (s[0][0] != '.' and s[0][0] == s[1][1] and s[1][1] == s[2][2]) {
		cout << s[0][0] << "\n";
		return;
	}
	else if (s[0][2] != '.' and s[0][2] == s[1][1] and s[1][1] == s[2][0]) {
		cout << s[0][2] << "\n";
		return;
	}

	cout << "DRAW" << "\n";

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