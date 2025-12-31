#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+5];
        int mi=100;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<mi) mi = arr[i];
        }
        long long int res=1,paisi=1;

        for(int i=0;i<n;i++){
            if(arr[i]==mi && paisi){
                res*=(arr[i]+1);
                paisi=0;
            }
            else res*=arr[i];
        }
        cout<<res<<"\n";

    }



    return 0;
}
