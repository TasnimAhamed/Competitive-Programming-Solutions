#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<ll> odd, even;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	if (x & 1) {
    		odd.push_back(x);
    	}
    	else {
    		even.push_back(x);
    	}
    }
    if (odd.size() == 0 or even.size() == 0) {
    	cout << 0 << "\n";
    	return;
    } 
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    ll odd_mx = odd.back();
    int paisi = 0;
    for (int i = 0; i < even.size(); i++) {
    	// int nw = odd_mx + even[i];
    	if (odd_mx < even[i]) {
    		paisi = 1;
    		break;
    	}
    	else {
    		odd_mx += even[i];
    	}
    }
    if (paisi) {
    	cout << even.size() + 1 << "\n";
    }
    else {
    	cout << even.size() << "\n";
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