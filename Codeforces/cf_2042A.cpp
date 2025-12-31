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
		vector<int> v(n);

		for(auto &x : v) cin >> x;
		sort(v.rbegin(), v.rend());
		int sum = 0;
		for(auto x : v){
			if((sum + x) <= k) sum+=x;
			else break;
		}
		cout << (k - sum) << "\n";

	}
	
	return 0;
}