#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int x; cin >> x;
    vector<int> v(4);
    for (int i = 1; i <= 3; i++) {
    	cin >> v[i];
    }

    if (v[x] != 0 and v[v[x]] != 0) {
    	cout << "YES\n";
    }
    else {
    	cout << "NO\n";
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