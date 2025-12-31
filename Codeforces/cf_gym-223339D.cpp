#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void print_digits(int n, int x){
	if (n == 0) {
		return;
	}
	print_digits(n/10, x);
	cout << n%10 << (n != x ? " " : "\n");
}

void solve() {
    int n; cin >> n;
    if (n == 0){
        cout << 0 << '\n';
        return;
    }
    print_digits(n, n);
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