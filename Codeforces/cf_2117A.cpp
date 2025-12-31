#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    int lo = 0, hi = n-1;;
    while(lo < hi){
    	if(v[hi] == 0) --hi;
    	if(v[lo] == 0) ++lo;
    	if(v[hi] == 1 and v[lo] == 1) break;
    }
    int need = hi - lo + 1;
    if(need > k){
    	cout << "NO\n";
    }
    else{
    	cout << "YES\n";
    }
    

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