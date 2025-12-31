#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
 	int n; cin >> n;
 	vector<int> v(n);

 	for(auto &x : v) {
 		cin >> x;
 	}

 	int diff = -1;
 	if(v[1] > v[0]) {
 		diff = v[1] - v[0];
 	}

 	int i = 1;

 	while( i < n - 1) {
 		int new_diff = v[i + 1] - v[i];
 		if(new_diff <= 0 ){
 			i++;
 			break;
 		}
 		else{
 			if(diff != new_diff) {
 				cout << "NO\n";
 				return;
 			}
 		}
 		++i;
 	}
 	int mn = v[i];
 	while(i < n) {
 		if(v[i] <= mn) {
 			mn = v[i];
 		}
 		else{
 			cout << "NO\n";
 			return;
 		}
 		++i;
 	}

 	cout << "YES\n";

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