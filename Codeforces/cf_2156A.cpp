#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
 	int n; cin >> n;
 	int rem = n - 3;
 	int ans = rem / 2;

 	cout << (ans + 1) << "\n";
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