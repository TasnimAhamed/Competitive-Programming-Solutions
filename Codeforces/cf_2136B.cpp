#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    vector<int> v(n + 1, 0);
    int cnt = 0;
    for (auto ch : s) {
    	if (ch == '1'){
    		++cnt;
    	}
    	else {
    		cnt = 0;
    	}

    	if (cnt == k) {
    		cout << "NO\n";
    		return;
    	}
    }
    if (cnt == k) {
		cout << "NO\n";
		return;
	}

	cnt = n;
	for (int i = 0; i < n; i++) {
		if (s[i] == '0') {
			v[i + 1] = cnt--;
		}
	}

	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			v[i + 1] = cnt--;
		}
	}

	cout << "YES\n";
	for (int i = 1; i <= n; i++) {
		cout << v[i] << (i == n ? "\n" : " ");
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