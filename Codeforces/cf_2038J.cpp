#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin >> n;
	int p = 0, ans = 0;
	for(int i = 0; i < n; i++){
		char ch; int x;
		cin >> ch >> x;
		if(ch == 'P') p += x;
		else{
			if((p+1)<=x){
				cout << "YES\n";
			}
			else{
				cout << "NO\n";
			}
			p-=min(p,x);
		}
	}
	
	return 0;
}