#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int need = abs(a-b);

        int pour = need/c;
        if(need%c!=0) pour++;

        int ans = pour/2;
        if(pour%2!=0) ans++;

        printf("%d\n",ans);

    }


    return 0;
}
