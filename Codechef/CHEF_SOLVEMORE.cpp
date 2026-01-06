#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool customSort(const pair<ll,ll> &a, const pair<ll,ll> &b){
    if((a.first + a.second) == (b.first + b.second)){
        return a.first < b.first;
    }
    return (a.first + a.second) < (b.first + b.second);
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        vector<ll> a(n), b(n);

        vector<pair<ll,ll>> v;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        for(int i = 0; i < n; i++){
            v.push_back({a[i],b[i]});
        }

        sort(v.begin(), v.end(), customSort);

        ll ans = 0;
        int idx = -1;

        for(int i = 0; i<n;i++){
            ll sum =  v[i].first + v[i].second;
            if(sum <=k ){
                k-=sum;
                ++ans;
            }else{
                idx = i;
                break;
            }
        }

        if(k !=0 ){
            for(int i = idx; i <  n; i++){
                if(v[i].first <=k){
                    ans++;
                    break;
                }
            }
        }

//        cout << "Ans: " << ans << '\n';
        cout << ans << '\n';
    }


    return 0;
}

