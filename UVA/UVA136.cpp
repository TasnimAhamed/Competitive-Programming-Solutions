#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {

    // int st = 2, cnt = 1;
    // auto isUgly = [&] (int n) {
    // 	int arr[] = {5, 3, 2};
    // 	for (int i = 0;  i < 3; i++) {
    // 		int x = arr[i];
    // 		while (n % x == 0) {
    // 			n /= x;
    // 		}
    // 	}
    // 	return n == 1;
    // };
    // while (true) {
    // 	if (isUgly(st)) {
    // 		++cnt;
    // 	}
    // 	if (cnt == 1500) {
    // 		cout << "The 1500'th ugly number is " << st << ".\n";
    // 		return;
    // 	}
    // 	++st;
    // }

    cout << "The 1500'th ugly number is " << 859963392 << ".\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}