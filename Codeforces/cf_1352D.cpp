#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	vector<int> v(n);
	for (auto &x : v) {
		cin >> x;
	}
	int a = 0, b = 0;
	int i = 0, j = n - 1;
	int prev = 0, alternet = 0;
	while ( i <= j) {
		int sum = 0;
		if (alternet % 2 == 0) {
			while(i <= j and sum <= prev) {
				sum += v[i];
				++i;
			}
			a += sum;

		}
		else {
			while( j >= i and sum <= prev) {
				sum += v[j];
				--j;
			}
			b += sum;
		}
		++alternet;
		prev = sum;
		// cout << sum << "\n";
		// cout << a << " " << b << "\n";
	}
	cout << alternet << " " << a << " " << b << "\n";

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}