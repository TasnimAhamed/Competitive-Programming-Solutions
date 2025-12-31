#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin >> n;
	vector<int> v(n);

	for(auto &x : v) cin >> x;

	int sum = 0;

	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			sum += (abs(v[i] - v[j]) * (v[i] + v[j]));
		}
	}

	cout << sum << "\n";
	
	return 0;
}