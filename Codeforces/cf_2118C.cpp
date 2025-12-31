#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    long long n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (auto &x : v) {
        cin >> x;
    }

    sort(v.begin(), v.end());

    vector<int> zero_count(61, 0), one_count(61, 0);

    for (auto x : v) {
        bitset<61> b(x);
        for (int i = 0; i < 61; i++) {
            if (b[i] == 0) {
                zero_count[i]++;
            }
            else{
            	one_count[i]++;
            }
        }
    }

    int ans = 0;

    vector<pair<long long, long long>> bit_cost;
    for (int i = 0; i < 61; i++) {
    	ans += one_count[i];
        long long cost_per_bit = 1LL << i; 
        long long total_cost = cost_per_bit * zero_count[i];
        bit_cost.push_back({cost_per_bit, total_cost});
    }


    for (auto pr : bit_cost) {
      if(k >= pr.second){
      	ans += (pr.second / pr.first);
      	k -= pr.second;
      }
      else {
      	ans += (k / pr.first);
      	break;
      }
    }

    cout << ans << "\n";

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;

}