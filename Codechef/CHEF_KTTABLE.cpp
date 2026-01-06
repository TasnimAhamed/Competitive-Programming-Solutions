#include<bits/stdc++.h>
#define rep(st,n,i) for(int i=st;i<n;i++)
#define ll long  long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        ll arr[n+5],idx[n+5];
        arr[0]=0;
        rep(1,n+1,i) cin>>arr[i];
        rep(1,n+1,i) cin>>idx[i];

        rep(1,n+1,i){
            if(arr[i]-arr[i-1]>=idx[i]) cnt++;
        }

        cout<<cnt<<endl;

    }


    return 0;
}
