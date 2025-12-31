#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;

    int dSum = 0, sSum = 0;
    int isOK = 1;
    int i = 0, j = n-1;

    while(i <= j){
        int mx = max(v[i], v[j]);
        if(isOK){
            sSum += mx;
        }
        else{
            dSum += mx;
        }
        isOK = !isOK;
        if(mx == v[i]) ++i;
        else --j;
    }

    cout << sSum << ' ' << dSum << '\n';


}

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;

}