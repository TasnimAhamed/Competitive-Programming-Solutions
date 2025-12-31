#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> ans;
    int cnt = 0;
    while (n > 0) {
    	int rem = n%10;
    	if (rem != 0) {
    		int pw = ceil(pow(10, cnt));
    		ans.push_back(pw * rem);
    	}
    	++cnt;
    	n/=10;
    }
    cout << ans.size() <<  "\n";
    for (auto &x : ans) {
    	cout << x << " ";
    }
    cout << "\n";
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