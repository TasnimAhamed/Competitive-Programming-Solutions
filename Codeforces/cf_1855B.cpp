#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        int mx=-1,cnt=0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0) cnt++;
            else{
                mx=max(mx,cnt);
                cnt=0;
            }
        }
        mx=max(mx,cnt);

        cout<<"Ans -> "<<mx<<endl;
    }
}
