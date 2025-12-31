#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int x, cnt = 0, sum = 0;
		for(int i = 0; i < n; i++){
			cin >> x;
			sum += x;
			int res = ceil(sqrt(sum*1.0));
			if((res * res) == sum and res&1) ++cnt;
		}

		cout << cnt << "\n";
	}
	
	return 0;
}