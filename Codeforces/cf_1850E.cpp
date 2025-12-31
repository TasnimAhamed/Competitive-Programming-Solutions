#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,w,a=0,b=0,c=0;
        cin>>n>>w;
        ll arr[n+5];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            a+=4;
            b+=4*arr[i];
            c+=arr[i]*arr[i];
        }
        c-=w;

        cout<<"A: "<<a<<endl;
        cout<<"B: "<<b<<endl;
        cout<<"C: "<<c<<endl;
        cout<<"4AC: "<<4*a*c<<endl;



        cout<<endl;
    }



    return 0;
}
