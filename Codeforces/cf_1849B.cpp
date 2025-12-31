#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;

        ll arr[n+5];
        vector<pair<ll,ll>> v;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr[i]%=k;
            if(arr[i]==0) arr[i]=k;
            v.push_back(make_pair(-arr[i],i+1));
        }

        sort(v.begin(),v.end());

        for(int i=0;i<n;i++){
            cout<<v[i].second;
            if(i<n-1) cout<<" ";
            else cout<<"\n";
        }
    }


    return 0;
}
