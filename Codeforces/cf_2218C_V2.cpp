#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(3 * n);
    int left = 1;
    int right = n + 1;
    for (int i = 0; i < 3 * n; i++) {
		if (i % 3 == 0) {
			v[i] = left++;
		}
		else {
			v[i] = right++;
		}
    }

    for (auto x : v) {
    	cout << x << " ";
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