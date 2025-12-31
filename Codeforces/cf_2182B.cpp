#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int a, b; cin >> a >> b;
    int a_tmp = a, b_tmp = b;
    int i = 0;
	int ans1 = 0;
	while (true) {
	    int cost = (1 << i);
	    if (i & 1) {
	        if (a >= cost) {
	            ans1++;
	            a -= cost;
	        } else break;
	    } else {
	        if (b >= cost) {
	            ans1++;
	            b -= cost;
	        } else break;
	    }
	    i++;
	}

	a = a_tmp;
	b = b_tmp;	

	i = 0;
	int ans2 = 0;
	while (true) {
	    int cost = (1 << i);
	    if (i & 1) {
	        if (b >= cost) {
	            ans2++;
	            b -= cost;
	        } else break;
	    } else {
	        if (a >= cost) {
	            ans2++;
	            a -= cost;
	        } else break;
	    }
	    i++;
	}

    cout << max(ans1, ans2) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}