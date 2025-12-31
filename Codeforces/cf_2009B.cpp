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
        string s[n];
        for(int i = 0; i < n; i++){
            cin >> s[i];
        }

        for(int i = n - 1; i >=0; i--){
            for(int j = 0; j < s[i].size(); j++){
                if(s[i][j]== '#'){
                    cout << j + 1 << " ";
                }
            }
        }
        cout << "\n";
    }

    return 0;

}
