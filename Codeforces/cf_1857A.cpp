#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,tmp;
        cin>>n;

        int sum=0;
        for(int i=0;i<n;i++){
            cin>>tmp;
            sum+=tmp;
        }
        if(sum%2==0) cout<<"YES\n";
        else cout<<"NO\n";
    }


    return 0;
}
