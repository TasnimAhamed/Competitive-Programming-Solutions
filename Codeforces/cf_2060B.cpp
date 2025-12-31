#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int arr[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> arr[i][j];
			}
		}

		for(int i = 0; i < n; i++){
			sort(arr[i], arr[i] + m);
		}
		int ans[n]={0};
		for(int i = 0; i < n; i++){
			int paisi = true;
			for(int j = 0; j < m - 1; j++){
				if(arr[i][j+1] != (arr[i][j] + n)){
					paisi = false;
				}
			}
			if(paisi){
				ans[arr[i][0]] = i+1;
			}
		}
		int paisi = true;
		for(int i = 0; i < n; i++){
			if(ans[i] == 0){
				cout << -1 << "\n";
				paisi = false;
				break;
			}
		}

		if(paisi){
			for(auto x : ans) cout << x << " ";
			cout << "\n";
		}

	}
	
	return 0;
}