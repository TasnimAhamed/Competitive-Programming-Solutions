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

		for(auto &x:v) cin >> x;

		// sort(v.begin(), v.end());
		int paisi = 0;
		for(int i = 1; i < n; i++){
			if(!(abs(v[i] - v[i-1]) == 5 or abs(v[i] - v[i-1]) == 7)){
				paisi = 1;
				break;
			}
		}
		if(paisi) cout << "NO\n";
		else cout << "YES\n";
	}
	
	return 0;
}