#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    sort(v.begin(), v.end());
    int mx = v[n-1], mn = v[0];

    if((mx + mn)%2 == 0){
        cout << 0 << "\n";
    }
    else{
        int ans1 = 0, ans2 = 0, ans3 = 0;
        for(int i = 0; i < n-1; i++){
            if((mx+v[i])%2 != 0){
                ++ans1;
            }
            else break;
        }
        for(int i = n-1; i > 0; i--){
            if((mn+v[i])%2 != 0){
                ++ans2;
            }
            else break;
        }
        int lo = 0, hi = n-1;
        while(lo < hi){
            if((v[lo] + v[hi])%2 != 0){
                ans3 += 2;
                lo++;
                hi--;
            }
            else break;
        }
        cout << min({ans1, ans2, ans3}) << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}

