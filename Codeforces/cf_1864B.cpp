#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;

    if (k & 1) {
    	string odd = "", even = "";
    	for (int i = 0; i < n; i++) {
    		if (i & 1) {
    			even += s[i];
    		}	
    		else {
    			odd += s[i];
    		}
    	}
    	sort(odd.begin(), odd.end());
    	sort(even.begin(), even.end());
    	int st = 0, en = 0;
    	for (int i = 0; i < n; i++) {
    		if (i & 1) {
    			s[i] = even[en++];
    		}
    		else {
    			s[i] = odd[st++];
    		}
    	}

    	cout << s << "\n";
    }
    else {
    	sort(s.begin(), s.end());
    	cout << s << "\n";
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