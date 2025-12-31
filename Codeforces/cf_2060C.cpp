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
		map<int,int> mp;
		for(auto &x : v){
			cin >> x;
			mp[x]++;
		}
		int ans = 0;

		for(auto pr : mp){
			if(pr.second){
				int ffx = pr.first;
				int ffy = pr.second;
				int rem = k - ffx;
				int ssy = mp[rem];
				if(rem == ffx){
					ffy/=2;
					ssy/=2;
				}
				ans += min(ffy, ssy);
				if(ssy){
					mp[rem] = 0;
					mp[ffx] = 0;
				}
			}
		}
		cout << ans << "\n";
	}
	
	return 0;
}