#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<vector<int>> primeGrid(n + 1, vector<int>(n + 1));

    auto isPrime = [&] (int nn) {
    	if (nn < 2) {
    		return false;
    	}
    	for (int i = 2; i * i <= nn; i++) {
    		if (nn % i == 0) {
    			return false;
    		}
    	}

    	return true;
    };

    int prime = n;
    while (true) {
    	if (isPrime(prime)) {
    		if (!isPrime(prime - n + 1)) {
    			break;
    		}
    	}
    	++prime;
    }

    for (int i = 1; i <= n; i++) {
    	for (int j = 1; j <= n; j++) {
    		if (i == j) {
    			primeGrid[i][j] = prime - n + 1;
    		}
    		else {
    			primeGrid[i][j] = 1;
    		}
    	}
    }

    for (int i = 1; i <= n; i++) {
    	for (int j = 1; j <= n; j++) {
    		cout << primeGrid[i][j] << (j == n ? "\n" : " ");
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