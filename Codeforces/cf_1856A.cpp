#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int mx=0,idx=0;
        int n;
        cin>>n;

        int arr[n+5];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i!=0 && arr[i]<arr[i-1]){
                idx=i;
            }

        }
        for(int i=0;i<idx;i++){
            mx = max(mx,arr[i]);
        }

        cout<<mx<<endl;

    }


    return 0;
}
