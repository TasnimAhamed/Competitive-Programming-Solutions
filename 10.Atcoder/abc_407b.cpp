#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    vector<int> sum;
    vector<int> diff;
    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= 6; j++){
            sum.push_back(i + j);
            diff.push_back(abs(i-j));
        }
    }

    int x, y; cin >> x >> y;

    int ff = 0, ss = 0, cm = 0;
    for(int i = 0; i < 36; i++){
        if(sum[i] >= x) ++ff;
        if(diff[i] >= y) ++ss;

        if(sum[i] >= x and diff[i]>=y) ++cm;
    }
    ff += (ss - cm);

    double ans = ff/36.0;

    cout << fixed << setprecision(9) << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
//    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}

