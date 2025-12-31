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
		for (int i = 1; i <= n; ++i)
		{
			cout << (2*i - 1) << " ";
		}
		cout << "\n";

	}
	
	return 0;
}