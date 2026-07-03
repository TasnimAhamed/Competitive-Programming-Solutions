#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 5000005;
int spf[N];
ll expo[N];
void sieve() {
    for (int i = 0; i < N; i++) {
    	spf[i] = i;
    }

    for (int i = 2; i * i < N; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < N; j += i) {
                if (spf[j] == j) {
                	spf[j] = i;
                }
            }
        }
    }
}

void pre() {

	for (int i = 2; i < N; i++) {
	    int x = i;

	    while (x > 1) {
	        int p = spf[x];
	        int cnt = 0;

	        while (x % p == 0) {
	            x /= p;
	            cnt++;
	        }

	        expo[p] += 1LL * cnt * (N - i + 1);
	    }
	}
}


void solve() {
    for (int i = 1; i <= 4; i++) {
    	cout << expo[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();
    pre();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}