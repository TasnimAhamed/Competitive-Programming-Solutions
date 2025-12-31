#include<bits/stdc++.h>

int main()
{

    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n+5];
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);

        for(int i=0;i<n-1;i++){
            if(arr[i]+arr[i+1] < (-arr[i]-arr[i+1])){
                arr[i]=-arr[i];
                arr[i+1]=-arr[i+1];
            }
        }
        long long int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }

        printf("%lld\n",sum);
    }


    return 0;
}
