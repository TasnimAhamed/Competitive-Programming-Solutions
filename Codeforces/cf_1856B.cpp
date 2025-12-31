#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int a[n+5],b[n+5];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];

        }
        for(int i=0;i<n/2;i++){
            swap(b[i],b[n-i-1]);
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]==b[i]) cnt++;
        }
        if(cnt==0) cout<<"YES\n";
        else if(cnt==n) cout<<"NO\n";
        else{
            cout<<"Match -> "<<cnt<<endl;
        }

    }


    return 0;
}

