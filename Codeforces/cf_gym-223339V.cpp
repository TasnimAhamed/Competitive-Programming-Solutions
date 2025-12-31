#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 25;
int n, x;
vector<int> v(N);

bool can_make(int idx, int curr) {
	if (curr == x and idx == n) {
		return true;
	}
	if (idx == n) {
		return false;
	}

	return (can_make(idx+1, curr + v[idx]) or can_make(idx+1, curr - v[idx]));

}

void solve() {
    cin >> n >> x;

    for (int i = 0; i < n; i++) {
    	cin >> v[i];
    }
    if (can_make(1, v[0])) {
    	cout << "YES\n";
    }
    else {
    	cout << "NO\n";
    }

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