#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		vector<int> v(5);
		for(int i = 0; i < 5; i++){
			if(i == 2) continue;
			cin >> v[i];
		}
		int mx = 0;
		for(int i = -100; i < 100; i++){
			v[2] = i; 
			int cnt = 0;
			for(int j = 0; j < 3; j++){
				if(v[j+2] == (v[j]+v[j+1])) ++cnt;
			}
			mx = max(mx, cnt);
		}

		cout << mx << "\n";


	}
	
	return 0;
}