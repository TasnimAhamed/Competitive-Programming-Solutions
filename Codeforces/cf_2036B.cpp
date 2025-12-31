#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		int k, n; cin >> k >> n;
		map<int,int> mp;

		for(int i = 0; i < n; i++){
			int x,y; cin >> x >> y;
			mp[x]+=y;
		}
		multiset<int, greater<int>> st;
		for(auto pr : mp){
			st.insert(pr.second);
		}

		int ans =  0, cnt = 0;

		for(auto val : st){
			ans += val;
			++cnt;
			if(cnt==k) break;
		}

		cout << ans << "\n";
	}
	
	return 0;
}