#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> p(n + 1);
   	p[n] = 1;
   	for (int i = 2; i < n; i++) {
   		p[i] = (i ^ 1);
   	}
   	p[1] = n;

   	if (n & 1) {
   		--p[1];
   	}

   	for (int i = 1; i <= n; i++) {
   		cout << p[i] << (i == n ? "\n" : " ");
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