#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;
	auto f = [&](int n)-> int{
		if( n < 2) return 0;
		for(int i = 2; i*i <=n; i++){
			if(n%i == 0) return 0;
		}
		return 1;
	};
	while(t--){
		int l, r; cin >> l >> r;
		if((r - l) < 2){
			cout << 0 << "\n";
		}
		else{
			int ans = 0;
			if(!(l&1)) ++l;
			while(l <= r){
				if((l + 2) <= r){
					// cout << l << "\n";
					++ans;
					l+=4;
				}
				else break;
			}
			cout << ans << "\n";
		}
	}
	
	return 0;
}