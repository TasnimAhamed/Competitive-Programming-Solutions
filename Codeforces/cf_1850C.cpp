#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string ans="",str[10];
        int idx_row,idx_col;
        for(int i=0;i<8;i++) cin>>str[i];

        int paisi=false;

        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(str[i][j]!='.'){
                    idx_row=i;
                    idx_col=j;
                    paisi=true;
                    break;
                }
            }
            if(paisi) break;
        }

        for(int i=idx_row;i<8;i++){
            if(str[i][idx_col]!='.') ans+=str[i][idx_col];
        }
        cout<<ans<<endl;
    }


    return 0;
}
