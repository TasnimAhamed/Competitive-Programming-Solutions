#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,tmp;
        cin>>n;
        int cnt=0;
        for(int i=1;i<=n;i++){
            cin>>tmp;
            if(tmp==i) cnt++;
        }

        if(cnt%2==0) cout<<cnt/2<<endl;
        else cout<<cnt/2+1<<endl;
    }



    return 0;
}
