#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
   int n; cin >> n;
   string s; cin >> s;

   int mx = -1, l = -1, r = -1;
   for (int i = 0; i < n - 1; i++) {
   		if (s[i] == 'a' and s[i + 1] == 'b') {
   			cout << i + 1 << " " << i + 2 << "\n";
   			return;
   		}
   		else if (s[i] == 'b' and s[i + 1] == 'a') {
   			cout << i + 1 << " " << i + 2 << "\n";
   			return;
   		}
   }

   cout << -1 << " " << -1 << "\n";
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