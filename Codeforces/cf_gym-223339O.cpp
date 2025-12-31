#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 32;
long long memo[N];

long long fib(int n){
	if (n <= 2) {
		return n - 1;
	}

	if (memo[n] != -1) {
		return memo[n];
	}
	memo[n] = fib(n-1) + fib(n - 2);

	return memo[n];
}

void solve() {
	for (int i = 0; i < N; i++){
		memo[i] = -1;
	}
    int n; cin >> n;

    cout << fib(n) << "\n";
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;

}