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

        for(int i=0;i<n;i++) cin>>arr[i];

        int newArray[n*2+5],len=0;
        newArray[0]=arr[0];
        len++;

        for(int i=1;i<n;i++){
            if(arr[i]>=arr[i-1]){
                newArray[len]=arr[i];
                len++;
            }
            else{
                if(arr[i]-1 == 0){
                    newArray[len]=arr[i];
                }
                else{
                    newArray[len]=arr[i]-1;
                }
                len++;
                newArray[len]=arr[i];
                len++;
            }
        }

        cout<<len<<endl;

        for(int i=0;i<len;i++){
            printf("%d",newArray[i]);
            if(i<len-1) cout<<" ";
            else cout<<endl;
        }
    }



    return 0;
}
