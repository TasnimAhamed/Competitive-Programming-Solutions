#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
   int n, m; cin >> n >> m;
   map<int, int> mp;
   for (int i = 0; i < m; i++) {
      int x; 
      cin >> x;
      mp[x]++;
   }

   int lo = 1, hi = 2 * m;
   auto isOK = [&] (int mid) {
      ll can = 0;
      for (int i = 1; i <= n; i++) {
         int val = mp[i];
         if(mid < val) {
            can += mid;
         }
         else{
            can += val + (mid - val) / 2;
         }
      }
      return can >= m;
   };

   while(lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      // cout << lo << " " << hi << " " << mid << "\n";
      if(isOK(mid)) {
         hi = mid - 1;
      }
      else{
         lo = mid + 1;
      }
   }

   cout << lo << "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}