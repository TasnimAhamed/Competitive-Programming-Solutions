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
        string s; cin >> s;
        int even = 0;
        for(auto ch : s){
            if((ch - '0')%2 == 0){
                even = 1;
                break;
            }
        }

        if(even){
            if((s[s.size() - 1] - '0')%2 == 0) cout << 0 << "\n";
            else if((s[0] - '0')%2 == 0) cout << 1 << en;
            else cout << 2 << "\n";
        }
        else{
            cout << -1 << en;
        }
    }

    return 0;

}
