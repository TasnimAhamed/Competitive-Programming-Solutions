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
		
		if(k>=(n-1)) cout << 1 << "\n";
		else cout << n << '\n';
	}
	
	return 0;
}