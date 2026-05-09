#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
 	int n; cin >> n;

 	if (n == 1) {
 		cout << "A" << "\n";
 		return;
 	}

 	if (n & 1) {
 		string ans = "";
 		char pos = char ('A' + n / 2);
 		char pos2 = char ('A' + n / 2 - 1);
 		ans += pos;
 		ans += pos2;
 		char lastChar = char('A' + n - 1);
 		while (lastChar >= 'A') {
 			if (lastChar != pos and lastChar != pos2) {
 				ans += lastChar;
 			}
 			--lastChar;
 		}
 		cout << ans << "\n";
 	}
 	else {
 		string ans = "";
 		char pos = char ('A' + n / 2 - 1);
 		ans += pos;
 		char lastChar = char('A' + n - 1);
 		while (lastChar >= 'A') {
 			if (lastChar != pos) {
 				ans += lastChar;
 			}
 			--lastChar;
 		}
 		cout << ans << "\n";
 	}

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