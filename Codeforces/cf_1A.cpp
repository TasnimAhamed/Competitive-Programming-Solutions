#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    ll n,m,a;
    cin>>n>>m>>a;

    ll ans = ceil(n/(a*1.0))*ceil(m/(a*1.0));

    cout<<ans<<endl;



    return 0;
}
