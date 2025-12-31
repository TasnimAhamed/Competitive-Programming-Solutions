#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,k,H;
        cin>>n>>m>>k>>H;

        int arr[n+5];
        for(int i=1;i<=n;i++) cin>>arr[i];
        int cnt=0;
        for(int i=1;i<=n;i++){
            int height_diff = abs(H-arr[i]);
            for(int j=1;j<=m;j++){
                int paisi=1;
                for(int p=j;p<=m;p++){
                    if(j!=p && abs(p-j)*k == height_diff){
                        paisi=0;
                        cnt++;
                        break;
                    }
                }
                if(!paisi) break;
            }
        }
        cout<<cnt<<endl;

    }


    return 0;
}
