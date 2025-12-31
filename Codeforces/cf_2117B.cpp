#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n+1);
    int tmp = n;
    v[1] = 2;
    v[tmp] = 1;
    if(tmp&1){
    	v[tmp-1] = tmp;
    	--tmp;
    }
    --tmp;
    int even = 1;
    for(int i = 2; i <= tmp; i += 2){
    	if(even){
    		v[i] = i + 1;
    		v[i+1] = i + 2;
    		even = 0;
    	}
    	else{
    		v[i] = i + 2;
    		v[i+1] = i + 1;
    		even = 1;
    	}
    }
    for(int i = 1; i <= n; i++){
    	cout << v[i] << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;

}