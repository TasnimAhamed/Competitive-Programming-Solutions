#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int a, b;
    while (scanf("%d %d", &a, &b) == 2) {
    	cout << a << " " << b << " ";
    	if (a > b) {
    		swap (a, b);
    	}

    	auto get_cycle = [&] (int n) {
			int cnt = 1;
			while (n > 1) {
				if (n & 1) {
					n *= 3;
					++n;
				}
				else {
					n /= 2;
				}
				++cnt;
			}

			return cnt;
		};

    	int mx = -1;
    	for (int i = a; i <= b; i++) {
    		// cout << i << ' ' << cnt[i] << "\n";
    		int cnt = get_cycle(i);
    		if (cnt >= mx) {
    			mx = cnt;
    		}
    	}
    	cout << mx << "\n";
    }
}

int main() {

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}