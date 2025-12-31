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
		vector<int> v(n);
		for(auto &x : v) cin >> x;

		int paisi = true;

		for(int i = 0; i < n-1; i++){
			int mn = min(v[i], v[i+1]);
			v[i] -= mn;
			v[i+1] -= mn;
			if(v[i] > v[i+1]){
				cout << "NO\n";
				paisi = false;
				break;
			}
		}
		if(paisi) cout << "YES\n";
	}
	
	return 0;
}