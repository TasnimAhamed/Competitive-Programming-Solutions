#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {

	int n, k; cin >> n >> k;
	multiset<int> s, s2;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		s.insert(x%k);
	}
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		s2.insert(x%k);
	}

	// for (auto x : s) {
	// 	cout << x << " ";
	// }
	// cout << "\n";
	// for (auto x : s2) {
	// 	cout << x << ' ';
	// }
	// cout << '\n';

	auto it = s.begin();
	
	while(true) {
		if(s2.empty()) {
			cout << "YES\n";
			return;
		}

		int val = *it;
		// cout << "val: " <<  val << "\n";
		auto ff = s2.find(val);

		if(ff != s2.end()) {
			s2.erase(ff);
		}
		else{
			val = k - val;
			auto ff = s2.find(val);
			if(ff != s2.end()) {
				s2.erase(ff);
			}
			else{
				cout << "NO\n";
				return;
			}

		}
		++it;
		// for (auto x : s) {
		// 	cout << x << " ";
		// }
		// cout << "\n";
		// for (auto x : s2) {
		// 	cout << x << ' ';
		// }
		// cout << '\n';
		// cout << "\n";

	}
    
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