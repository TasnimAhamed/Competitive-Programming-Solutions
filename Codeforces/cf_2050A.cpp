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
		vector<int> sz;
		string s;
		for(int i = 0; i < n; i++){
			cin >> s;
			sz.push_back(s.size());
		}
		
		int cnt = 0;
		for(int i = 0; i < n; i++){
			if(m >= sz[i]){
				++cnt;
				m -= sz[i];
			}
			else break;
		}
		cout << cnt << "\n";
	}
	
	return 0;
}