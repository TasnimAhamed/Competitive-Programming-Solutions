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
		vector<int> met(n), req(n);

		for(auto &x : met) cin >> x;
		for(auto &x : req) cin >> x;

		int cnt = 0, mn = INT_MAX;
		for(int i = 0; i < n; i++){
			if(req[i] > met[i]){
				++cnt;
				mn = min(req[i] - met[i], mn);
			}
		}
		if(cnt == 0){
			cout << "YES\n";
		}
		else if(cnt >= 2){
			cout << "NO\n";
		}
		else{
			// cout << mn << "\n";
			int paisi = 1;
			for(int i = 0; i < n; i++){
				if(abs(met[i] - req[i]) < mn){
					cout << "NO\n";
					paisi = 0;
					break;
				}
			}
			if(paisi) cout << "YES\n";
		}

 	}
	
	
	return 0;
}