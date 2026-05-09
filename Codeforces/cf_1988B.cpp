#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    string new_s = "";
    int cnt = 0;
    for (auto ch : s) {
    	if (ch == '1') {
    		if(cnt) {
    			new_s += '0';
    			cnt = 0;
    		}
    		new_s += '1';
    	}
    	else {
    		++cnt;
    	}
    }
    if(cnt) {
		new_s += '0';
		cnt = 0;
	}
	int one = count(new_s.begin(), new_s.end(), '1');
	int zero = new_s.size() - one;
	if (one > zero) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
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