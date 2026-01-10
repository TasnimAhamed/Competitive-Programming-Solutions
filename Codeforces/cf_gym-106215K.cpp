#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, d; cin >> n >> d;
    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }
    
    auto getHeight = [&] (int mid) {
        for (auto x : v) {
            if(mid >= x) {
                mid -= x;
            }
        }
        return mid;
    };

    int lo = 0, hi = d, ans = 0;
    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        int poss = getHeight(mid);
        if(poss >= ans) {
            ans = poss;
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }

    cout << ans << "\n";

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}