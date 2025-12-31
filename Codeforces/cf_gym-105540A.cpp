#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define en "\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k; cin >> n >> m >> k;
    string str[n];
    for(auto &s : str) cin >> s;
    map<char,int> mp;

    for(auto s : str){
        for(auto ch : s) mp[ch]++;
    }

    char ch = 'a';

    for(auto pr : mp){
        if(pr.second == 1){
            ch = pr.first;
            break;
        }
    }

//    cout << ch << "\n";

    for(int i = 0; i < n; i++){
        for(int j = 0; j < str[i].size(); j++){
            if(str[i][j] == ch){
                cout << i + 1 << " " << ((j+1)%k == 0 ? (j+1)/k : (j+1)/k+1) << "\n";
                break;
            }
        }
    }


    return 0;

}
