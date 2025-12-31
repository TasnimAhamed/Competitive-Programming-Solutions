#include<bits/stdc++.h>
using namespace std;
using ll = long long;

//unsigned long long getSquare(unsigned long long mid){
//    unsigned long long lo = 1ULL, hi = mid;
//    while(lo <= hi){
//        unsigned long long mm = lo + (hi - lo)/2;
//
//    }
//}

void solve(){
    unsigned long long n; cin >> n;
    unsigned long long lo = n, hi = ULLONG_MAX, ans = 0;

    while(lo <= hi){
        unsigned long long mid = lo + (hi - lo)/2;
        unsigned long long sq = (unsigned long long)sqrtl(mid);
        unsigned long long ff = mid - sq;

        if( ff >= n){
            ans = mid;
            hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }
    }

    cout << ans << "\n";
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

