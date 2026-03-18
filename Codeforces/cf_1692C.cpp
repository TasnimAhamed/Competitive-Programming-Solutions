#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	string str[8];
	for (auto &s : str) {
		cin >> s;
	}

	auto isOK = [&] (int i, int j) {
		if (str[i - 1][j - 1] != '#' or str[i - 1][j + 1] != '#') {
			return false;
		}
		if (str[i + 1][j - 1] != '#' or str[i + 1][j + 1] != '#') {
			return false;
		}

		return true;
	};
	
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			if (str[i][j] == '#' and isOK(i, j)) {
				cout << i + 1 << " " << j + 1 << "\n";
			}
		}
	}
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