#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, a, b; cin >> n >> a >> b;
    
    if ((a + b + 2) > n or abs(a - b) > 1) {
    	cout << -1 << "\n";
    	return;
    }

  	vector<int> v(n + 1);
  	int len = a + b + 2, cnt = n;
  	for (int i = n - len + 1; i <= n; i++) {
  		v[i] = cnt;
  		--cnt;
  	}
  	for (int i = 1; i <= n - len; i++) {
  		v[i] = i;
  	}

  	for (int i = n - len + 1; i < n; i += 2) {
  		swap(v[i], v[i + 1]);
  	}

  	for (int i = 1; i <= n; i++) {
  		cout << v[i] << " ";
  	}
  	cout << "\n";
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