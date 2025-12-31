#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    int zero = count(v.begin(), v.end(), 0);
	int one = count(v.begin(), v.end(), 1);

	if(one == n or zero == n){
		cout << "YES\n";
		return;
	}
	for(int i = 0; i < n-1; i++){
		if(v[i] == 0 and v[i+1] == 0){
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}