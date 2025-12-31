#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        string str;
        cin>>str;
        int lr=0,ud=0,paisi=0;
        for(auto x:str){
            if(x=='L') lr--;
            else if(x=='R') lr++;
            else if(x=='U') ud++;
            else ud--;
            //cout<<lr<<" "<<ud<<endl;
            if(lr==1 && ud==1){
                paisi=1;
                printf("YES\n");
                break;
            }
        }
        if(!paisi) printf("NO\n");
    }


    return 0;
}
