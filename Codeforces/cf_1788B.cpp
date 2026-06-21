#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {

	
	int n; cin >> n;

	if (n % 2 == 0) {
		cout << n / 2 << " " << n / 2 << "\n";
	}
	else {
		if (n % 10 != 9) {
			cout << n / 2  << " " << n / 2 + 1 << "\n";
		}
		else {
			string s = to_string(n);
			string a, b;
			int turn = false;
			for (auto ch : s) {
				int d = ch - '0';
				if (d % 2 == 0) {
					a += char('0' + d / 2);
					b += char('0' + d / 2);
				}
				else {
					if (!turn) {
						a += char('0' + d / 2 + 1);
						b += char('0' + d / 2);
					}
					else {
						a += char('0' + d / 2);
						b += char('0' + d / 2 + 1);
					}
					turn = !turn;
				}
			}

			cout << stoi(a) << " " << stoi(b) << "\n";
		}
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