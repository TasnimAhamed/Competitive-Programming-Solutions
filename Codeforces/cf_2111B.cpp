#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 12;
int fibo[N];
void getFibo(){
    fibo[1] = 1;
    fibo[2] = 2;
    for(int i = 3; i < N; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
}

void solve(){

    int n, m; cin >> n >> m;
    for(int i = 1 ; i<=  m;  i++){
        int x, y, z; cin >> x >> y >> z;
        int mn = min({x, y, z});
        int mx = max({x, y, z});

        if(mn >= fibo[n] and mx >= fibo[n+1]){
            cout << "1";
        }
        else{
            cout << "0";
        }
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    getFibo();
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}

