#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin >> n;
    int g[n+1][n+1];
    int idx[2*n+1] = {0};
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> g[i][j];
            idx[g[i][j]] = 1;
        }
    }
    int missing = -1;
    for(int i = 1; i<= 2*n; i++){
        if(idx[i] == 0){
            missing = i;
            break;
        }
    }
    int ans[2*n+1]={0};
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            ans[i+j] = g[i][j];
        }
    }

    for(int i = 1; i <= 2*n; i++){
        if(ans[i] == 0){
            ans[i] = missing;
            break;
        }
    }

    for(int i = 1; i <= 2*n; i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
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

