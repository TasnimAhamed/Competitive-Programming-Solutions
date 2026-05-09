#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int a1, b1; cin >> a1 >> b1;
    int a2, b2; cin >> a2 >> b2;

    if (a1 == b2 and (b1 + a2) == a1) {
    	cout << "Yes\n";
    }
    else if (a2 == b1 and (a1 + b2) == a2) {
    	cout << "Yes\n";
    }
    else if (b1 == b2 and (a1 + a2) == b1) {
    	cout << "Yes\n";
    }
    else if (a1 == a2 and (b1 + b2) == a1) {
    	cout << "Yes\n";
    }
    else {
    	cout << "No\n";
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