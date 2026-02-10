#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string str[8];
    for (auto &s : str) {
    	cin >> s;
    }

    for (auto s : str) {
    	int cnt = 0;
    	char ch = 'R';
    	for (int i = 0; i < 8; i++) {
    		if (s[i] == ch) {
    			++cnt;
    		}
    	}
    	if (cnt == 8) {
    		cout << "R" << "\n";
    		return;
    	}
    }

    cout << "B\n";

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