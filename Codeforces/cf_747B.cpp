#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    if (n % 4){
    	cout << "===\n";
    	return;
    }
    int mn = n / 4;
    int a = 0, c = 0, g = 0, t = 0;

    for (auto ch : s) {
    	if (ch == 'A') {
    		++a;
    	}
    	else if (ch == 'C') {
    		++c;
    	}
    	else if (ch == 'G') {
    		++g;
    	}
    	else if (ch == 'T') {
    		++t;
    	}
    }

    if (a > mn or c > mn or g > mn or t > mn) {
    	cout << "===\n";
    	return;
    }

    for (auto &x : s) {
    	if (a < mn and x == '?') {
    		x = 'A';
    		++a;
    	}
    	else if (c < mn and x == '?') {
    		x = 'C';
    		++c;
    	}
    	else if (g < mn and x == '?') {
    		x = 'G';
    		++g;
    	}
    	else if (t < mn and x == '?') {
    		x = 'T';
    		++t;
    	}
    }

    cout << s << "\n";

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