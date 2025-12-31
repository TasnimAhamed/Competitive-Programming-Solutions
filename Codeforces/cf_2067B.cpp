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
        vector<int> v(n);
        map<int,int> mp;
        for(auto &x : v){
            cin >> x;
            mp[x]++;
        }
        vector<int> rem;
        for(auto pr : mp){
            if(pr.second%2){
                rem.push_back(pr.first);
            }
        }
        if(rem.size()%2 == 1){
            cout << "No1\n";
        }
        else{
            sort(rem.begin(), rem.end());
//            cout << "Rem: " << rem.size() << " -> ";
//            for(auto x : rem) cout << x << " ";
//            cout << "\n";
            int found = 1, len = rem.size();
            for(int i = 0; i < len-1; i++){

                int paisi = 0, val = rem[i];
                while(true){
//
                    if(mp[val] > 1){
                        rem[i]++;
                    }
                    else{
//                        cout << rem[i] << "\n";
                        break;
                    }

                    if(rem[i] == rem[i+1]){
                        paisi = 1;
                        break;
                    }
                }
                if(paisi == 1){
                    ++i;
                }else{
                    found = 0;
                    break;
                }
            }

            if(found == 1){
                cout << "Yes\n";
            }
            else{
                cout << "No2\n";
            }
        }

    }

    return 0;

}
