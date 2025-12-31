#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int ans= a;

        while(ans<b){
            if(ans%2==0 && ans!=2){
                break;
            }
            ans++;
        }

        if(ans%2==0){
            if(ans==2) printf("-1\n");
            else printf("%d 2\n",ans-2);
        }
        else{
            if(isPrime(ans)) printf("-1\n");
            else{
                int res = 3;
                while(ans%res!=0){
                    res+=2;
                }
                printf("%d %d\n",res,ans-res);
            }
        }
    }



    return 0;
}
