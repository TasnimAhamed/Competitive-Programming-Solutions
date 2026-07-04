#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for (auto &x : v) {
   		cin >> x;
   }

   if (n <= 2)	{
   		cout << -1 << "\n";
   		return;
   }

   sort(v.begin(), v.end());

   for (int i = 0; i < n - 2; i++) {
   		if (v[i] == v[i + 1] and v[i + 1] == v[i + 2]) {
   			cout << v[i] << "\n";
   			return;
   		}
   }

   cout << -1 << "\n";
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