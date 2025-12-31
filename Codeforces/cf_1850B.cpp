#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b,idx,mx=-60;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a>>b;
            if(a<=10 && b>mx){
                idx=i;
                mx=b;
            }
        }
        cout<<idx<<endl;

    }

    return 0;
}

