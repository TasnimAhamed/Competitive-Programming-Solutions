#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	vector<int> v(n);
	vector<bool> check(n);
	
	for (auto &x : v) {
		cin >> x;
		if(x < n) {
			check[x] = 1;
		}
	}
	int mex = 0;

	while (mex < n and check[mex]) {
		++mex;
	}	
	if (mex == n) {
		cout << "No\n";
		return;
	}
	int left_idx = -1, right_idx = -1;
	for (int i = 0; i < n; i++) {
		if(v[i] == mex + 1) {
			right_idx = i;
			if(left_idx == -1) {
				left_idx = i;
			}
		}
	}
	if (left_idx == -1 and right_idx == -1) {
		cout << "YES\n";
		return;
	}
	for (int i = left_idx; i <= right_idx; i++) {
		v[i] = mex;
	}
	check.assign(n, 0);
	for (auto x : v) {
		if(x < n) {
			check[x] = 1;
		}
	}
	int new_mex = 0;
	while (new_mex < n and check[new_mex]) {
		new_mex++;
	}

	if (new_mex == mex + 1) {
		cout << "Yes\n";
	}
	else{
		cout << "No\n";
	}


}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}