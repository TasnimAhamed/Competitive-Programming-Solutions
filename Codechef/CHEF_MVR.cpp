#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,x,y;
    cin>>a>>b>>x>>y;

    if(a*2+b == x*2+y) cout<<"Equal\n";
    else if(a*2+b>x*2+y) cout<<"Messi\n";
    else cout<<"Ronaldo\n";


    return 0;
}
