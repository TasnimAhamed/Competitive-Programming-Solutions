#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int x,y,z,xi=0,yi=0,zi=0;
    while(t--){
        cin>>x>>y>>z;
        xi+=x;
        yi+=y;
        zi+=z;
    }

    if(xi==0 && yi==0 && zi==0) printf("YES\n");
    else printf("NO\n");


    return 0;
}
