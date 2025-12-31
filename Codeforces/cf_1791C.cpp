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

        int i,j;
        for(i=0,j=n-1;i<j;){
            if((str[i]=='0' && str[j]=='1') || (str[i]=='1' && str[j]=='0')){
                i++;
                j--;
                //cout<<i<<" "<<j<<endl;
            }
            else{
                break;
            }
        }

        if(j<i) printf("0\n");
        else printf("%d\n",j-i+1);

    }


    return 0;
}
