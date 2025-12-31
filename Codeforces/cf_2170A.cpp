#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int dx[] = {0, -1, 1, 0, 0};
int dy[] = {0, 0, 0, -1, 1};

void solve() {
    int n; cin >> n;
    int arr[n + 2][n + 2] { };
    for (int i = 1; i <= n; i++) {
    	for (int j = 1; j <= n; j++){
    		arr[i][j] = (n * (i - 1)) + j;
    	}
    }

    int mx = INT_MIN;
    for (int i = 1; i <= n; i++) {
	    for (int j = 1; j <= n; j++) {

	        int sum = 0;
	   
	        for (int k = 0; k < 5; k++) {
	            int x = i + dx[k];
	            int y = j + dy[k];

	            sum += arr[x][y];
	        }

	        mx = max(mx, sum);
	    }

	}

	cout << mx << "\n";



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