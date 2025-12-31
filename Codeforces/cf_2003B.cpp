#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        int a;
        cin>>a;
        int arr[a];

        for (int i = 0; i < a; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+a,greater<int>());


        if(a%2 == 0){
            cout<<arr[(a)/2 - 1];
        }
        else{
            cout<<arr[(a)/2];
        }

    }

}
