#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; 
    cin >> n;
    vector<int> v(2*n);
    unordered_map<int, int> mp;
    for (auto &x : v) {
        cin >> x;
        mp[x]++;
    }

    int odd = 0, even = 0;
    for (auto [key, val] : mp) {
        if( val & 1) {
            ++odd;
        }
        else {
            ++even;
        }
    }

    int ans = 0;
    for (int s = even; s >= 0; --s) {
        int ff = max(0, odd + s - n);
        int ss = min(odd, n - s);
        if (ff > ss) {
            continue;
        }
        int need = (n - s) % 2;
        if (need < 0) {
            need += 2;
        } 

        int left = ff + (need - (ff % 2) + 2) % 2;
        if (left <= ss) {
            int curr = odd + 2 * s;
            if (curr > ans) {
                ans = curr;
            }
            break; 
        }
    }
    cout << ans << '\n';

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