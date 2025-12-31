#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n+5],sum=0;

    for(int i=0;i<n;i++) cin>>arr[i],sum+=arr[i];

    sort(arr,arr+n,greater<int>());

    int cnt=0,newSum=0;

    for(int i=0;i<n;i++){
        newSum+=arr[i];
        ++cnt;
        if(newSum>(sum-newSum)){
            break;
        }
    }
    printf("%d\n",cnt);


    return 0;
}
