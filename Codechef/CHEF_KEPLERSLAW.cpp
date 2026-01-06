#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int t1,t2,r1,r2;
        cin>>t1>>t2>>r1>>r2;

        if(t1*t1*r2*r2*r2 == t2*t2*r1*r1*r1) cout<<"YES\n";
        else cout<<"NO\n";

    }


    return 0;
}

