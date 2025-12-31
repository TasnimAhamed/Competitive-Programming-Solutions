#include<bits/stdc++.h>
using namespace std;
int isSorted(int *arr,int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]) return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n],even=0,odd=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2) odd++;
            else even++;
        }

        if(isSorted(arr,n)) cout<<"YES\n";
        else{
            if(even==1 || odd==1) cout<<"NO\n";
            else{

            }
        }

    }


    return 0;
}
