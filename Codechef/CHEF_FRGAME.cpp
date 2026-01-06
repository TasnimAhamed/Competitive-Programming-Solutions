#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(a<b) a+=c;
        else b+=c;

        if(a<b) a+=d;
        else b+=d;

        if(b>a) cout<<"S\n";
        else cout<<"N\n";

    }


    return 0;
}
