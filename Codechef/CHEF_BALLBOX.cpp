#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int res = k*(k+1)/2;

        if(res<=n) cout<<"YES\n";
        else cout<<"NO\n";

    }


    return 0;
}
