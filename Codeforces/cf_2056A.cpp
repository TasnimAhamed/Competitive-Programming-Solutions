#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		vector<pair<int,int>> v(n);
		for(auto &x : v) cin >> x.first >> x.second;
		
		for(int i = 1; i < n; i++){
			v[i].first += v[i-1].first;
			v[i].second += v[i-1].second;
		}


		int sum = 4 * k * n;

		for(int i = 1; i < n; i++){
			int xx = v[i-1].first + k;
			int yy = v[i-1].second + k;
			// cout << xx << " " << yy << "\n";
			int x = v[i].first;
			int y = v[i].second;
			int res = abs(xx - x) * 2 + abs(yy - y) * 2;
			sum -= res; 
		}

		cout << sum << "\n";


	}
	
	return 0;
}