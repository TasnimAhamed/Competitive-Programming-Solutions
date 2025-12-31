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
		map<int, pair<int,int>> mp;

		for (int i = 0; i < n; ++i)
		{
			int x; cin >> x;
			mp[x%k].first++;
			mp[x%k].second = i + 1;
		}
		int paisi = 0;
		for(auto pr : mp){
			if(pr.second.first == 1){
				cout << "YES\n";
				cout << pr.second.second << "\n";
				paisi = 1;
				break;
			}
		}
		if(!paisi){
			cout << "NO\n";
		}
	}
	
	return 0;
}