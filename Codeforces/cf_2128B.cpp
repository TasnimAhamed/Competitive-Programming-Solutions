#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	vector<int> v;
	deque<int> dq;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		dq.push_back(x);
	}
	int idx = 0;
	string ans = "";
	while(!dq.empty()) {
		int back = dq.back();
		int front= dq.front();
		if(idx%2 == 0) {
			if(back > front) {
				dq.pop_back();
				ans += "R";
				// cout << back << " ";
			}
			else{
				dq.pop_front();
				ans += "L";
				// cout << front << ' ';
			}
		}
		else{
			if(back < front) {
				dq.pop_back();
				ans += "R";
				// cout << back << ' ';
			}
			else{
				dq.pop_front();
				ans += "L";
				// cout << front << ' ';
			}
		}
		++idx;
	}
	// cout << "\n";

	cout << ans << "\n";
    
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