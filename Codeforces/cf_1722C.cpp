#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map<string, vector<int>> mp;
        string word;
        int cnt[3] = {0};
        for(int i = 0; i< 3; i++){
            for(int j = 0; j < n; j++){
                cin >> word;
                mp[word].push_back(i);
            }
        }

        for(auto vec : mp){
            if(vec.second.size() == 1){
                cnt[vec.second[0]] += 3;
            }
            else if(vec.second.size() == 2){
                cnt[vec.second[0]] += 1;
                cnt[vec.second[1]] += 1;
            }
        }
        cout << cnt[0] << " " << cnt[1] << " " << cnt[2] << "\n";
    }


    return 0;

}
