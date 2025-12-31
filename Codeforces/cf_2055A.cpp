#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		int n, a, b;
		cin >> n >> a >> b;
		int ff = abs(a - b);
		if(ff&1) cout << "NO\n";
		else cout << "YES\n";
	
	}
	
	return 0;
}