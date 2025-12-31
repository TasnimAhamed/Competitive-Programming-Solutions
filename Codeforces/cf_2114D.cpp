#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin >> n;
    vector<int> rv, cv;
    map<int,int> rp, cp;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        if(rp[x] == 0){
            rv.push_back(x);
        }
        if(cp[y] == 0){
            cv.push_back(y);
        }
        rp[x]++;
        cp[y]++;
    }
    sort(rv.begin(), rv.end());
    sort(cv.begin(), cv.end());
    int r_sz = rv.size(), c_sz = cv.size();


    int max_row = rv[r_sz - 1], min_row = rv[0];
    int max_col = cv[c_sz - 1], min_col = cv[0];

    ll total = (max_row - min_row + 1) * (max_col - min_col + 1) * 1LL;

    if(r_sz == 1 and c_sz == 1){
        cout << 1 << "\n";
    }
    else if(r_sz == 1){
        int val = (max_col - min_col + 1);
        if(val == n or ){
            cout << n << "\n";
        }
        else{
            ll ff_val = (max_col - cv[1] + 1);
            ll ss_val = (cv[c_sz - 2] - min_col + 1);

            cout << min(ff_val, ss_val) << "\n";
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

