#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, k; cin >> n >> k;
    vector<int> a(n), b(n);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    int mx = *max_element(a.begin(), a.end());
    int mi = *min_element(a.begin(), a.end());
    int cnt = count(b.begin(), b.end(), -1 );
    if(cnt == n){
        int ff = mx - mi;
        int ans = k - ff + 1;
        cout << max(0, ans) << "\n";
    }
    else{
        int sum = -1;
        for(int i = 0; i < n; i++){
            if(b[i] != -1){
                int res = a[i] + b[i];
                if(sum == -1) sum = res;
                else if(sum != res){
                    cout << 0 << "\n";
                    return;
                }
            }
        }
        int mi2 = INT_MAX, mx2 = -1;
        for(int i = 0; i < n; i++){
            if(b[i] == -1){
                mx2 = max(mx2, a[i]);
                mi2 = min(mi2, a[i]);
            }
        }
        if((mi2 + k) >= sum and mx2 <= sum){
            cout << 1 << "\n";
        }
        else{
            cout << 0 << "\n";
        }
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

