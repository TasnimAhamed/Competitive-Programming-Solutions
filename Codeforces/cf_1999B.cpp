#include<bits/stdc++.h>
using namespace std;
#define int long long int

int getWinner(int a, int b){
    if(a > b) return 1;
    if(a == b) return 0;
    return -1;
}

int32_t main()
{
    int t; cin >> t;
    while(t--){
        int a1, a2; cin >> a1 >> a2;
        int b1, b2; cin >> b1 >> b2;
        int cnt = 0;

        if((getWinner(a1, b1) + getWinner(a2, b2)) > 0) ++cnt;
        if((getWinner(a1, b2) + getWinner(a2, b1)) > 0) ++cnt;

        if((getWinner(a2, b1) + getWinner(a1, b2)) > 0) ++cnt;
        if((getWinner(a2, b2) + getWinner(a1, b1)) > 0) ++cnt;

        cout << cnt << '\n';
    }
    return 0;
}
