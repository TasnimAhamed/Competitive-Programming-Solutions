#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, x; cin >> n >> x;
    if(x == n){
        for(int i = 0; i < n; i++){
            cout << i << " ";
        }
        cout << "\n";
    }
    else{
        vector<int> ans(n);
        for(int i = 0; i < x; i++){
            ans[i] = i;
        }
        for(int i = x; i < n-1; i++){
            ans[i] = i+1;
        }
        ans[n-1] = x;
        for(auto val : ans){
            cout << val << " ";
        }
        cout << "\n";
    }
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

