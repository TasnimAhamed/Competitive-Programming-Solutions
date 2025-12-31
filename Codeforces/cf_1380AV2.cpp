#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define en "\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(auto &x : v) cin >> x;
        vector<pair<int,int>> right_min(n);

        right_min[n-1].first = v[n-1];
        right_min[n-1].second = n-1;

        for(int i = n-2; i >= 0; i--){
            if(v[i] < right_min[i+1].first){
                right_min[i].first = v[i];
                right_min[i].second = i;
            }
            else{
                right_min[i].first = right_min[i+1].first;
                right_min[i].second = right_min[i+1].second;
            }
        }
        int paisi = 0, lmn = v[0], idx = 0;
        for(int i = 1 ; i < n-1; i++){

            if(lmn < v[i] and v[i] > right_min[i+1].first){
                cout << "YES" << en;
                cout << idx + 1 << " " << i + 1 << " " << right_min[i+1].second + 1 << "\n";
                paisi = 1;
                break;
            }
            if(v[i] < lmn){
                lmn = v[i];
                idx = i;
            }
        }
        if(!paisi) cout << "NO" << en;
    }

    return 0;

}

