#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int ff = s[0] - '0';
		int ss = s[2] - '0';
		if(ff == ss){
			cout << ff << "=" << ss << "\n";
		}
		else if(ff < ss){
			cout << ff << "<" << ss << "\n";
		}
		else{
			cout << ff << ">" << ss << "\n";
		}
	}
	
	return 0;
}