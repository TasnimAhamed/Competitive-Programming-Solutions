#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int a,b,c,mid;

        cin>>a>>b>>c;

        if((a>b && a<c) || (a>c && a<b)) mid=a;
        else if((b>a && b<c) || (b>c && b<a)) mid=b;
        else mid=c;

        printf("%d\n",mid);
    }


    return 0;
}
