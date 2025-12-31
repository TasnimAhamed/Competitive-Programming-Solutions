#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    int total = accumulate(v.begin(), v.end(), 0);
    double dis = sqrt(1.0 * (x1 - x2) * (x1 - x2) + 1.0 * (y1 - y2) * (y1 - y2));
    if(n == 1 and total != dis) {
    	cout << "NO\n";
    	return;
    }
    if(dis > total) {
    	cout << "NO\n";
    	return;
    }

    if(n == 2) {
    	if((dis == 0 and v[0] != v[1])) {
    		cout << "NO\n";
    		return;
    	}
    }

    cout << "YES\n";

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}