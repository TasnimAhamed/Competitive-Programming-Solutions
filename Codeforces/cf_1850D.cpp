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

        int arr[n+5];

        for(int i=0;i<n;i++) cin>>arr[i];

        sort(arr,arr+n,greater<int>());

        int cnt=0,mx=-1;
        for(int i=0;i<n-1;i++){
            if(abs(arr[i]-arr[i+1])<=k){
                cnt++;
            }
            else{
                mx= max(mx,cnt);
                cnt=0;
            }
        }
        mx= max(mx,cnt);
        cout<<n-(mx+1)<<endl;


    }


    return 0;
}
