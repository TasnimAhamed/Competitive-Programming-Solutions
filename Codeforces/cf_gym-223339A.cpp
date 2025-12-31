#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void print_rec(int n){
	if (n == 0) {
		return;
	}
	cout << "I love Recursion\n";
	print_rec(n-1);
}

void solve() {
    int n; cin >> n;

    print_rec(n);
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