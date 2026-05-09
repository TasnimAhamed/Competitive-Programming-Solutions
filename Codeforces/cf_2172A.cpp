#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    vector<int> v(3);
    for (auto &x : v) {
    	cin >> x;
    }
    sort(v.begin(), v.end());
    if ((v[2] - v[0]) >= 10) {
    	cout << "check again\n";
    }
    else {
    	cout << "final " << v[1] << "\n";
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}