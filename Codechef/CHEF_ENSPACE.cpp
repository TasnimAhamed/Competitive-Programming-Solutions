#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int x,a,b;
        cin>>x>>a>>b;

        if(a+b*2<=x) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}
