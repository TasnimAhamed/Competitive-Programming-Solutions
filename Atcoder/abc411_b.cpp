#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int arr[n-1];
    for (auto &x : arr) {
    	cin >> x;
  	}

    for (int i = 0; i < n-1; i++) {
    	int prev = arr[i]; 
    	cout << arr[i];
    	for (int j = i + 1; j < n - 1; j++) {
    		prev += arr[j];
    		cout << " " << prev;
    	}
    	cout << "\n";
    }
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