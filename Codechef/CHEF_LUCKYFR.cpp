#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        while(n>0){
            int rem=n%10;
            if(rem==4) cnt++;
            n/=10;
        }
        cout<<cnt<<endl;
    }


    return 0;
}
