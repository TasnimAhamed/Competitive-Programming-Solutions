#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    int paisi = 0;
    for (auto &x : v) {
    	cin >> x;
    	if(x > 7) {
    		paisi = 1;
    	}
    }

    if(paisi or n < 13 or v[0] != 1 or v[0] != 1) {
    	cout << "no\n";
    	return;
    }

    int st = 1;
    int i = 0, j = n - 1;
    while(i <= j) {
    	int cnt1 = 0, cnt2 = 0;
    	while(v[i] == st) {
    		++cnt1;
    		++i;
    	}
    	while(v[j] == st) {
    		++cnt2;
    		--j;
    	}
    	if(cnt1 != cnt2 or cnt1 == 0 or cnt2 == 0) {
    		cout << "no\n";
    		return;
    	}
    	++st;
    	if(st > 7 and i <= j) {
    		cout << "no\n";
    		return;
    	}
    }

    if(st != 8) {
    	cout << "no\n";
    	return;
    }

    cout << "yes\n";


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