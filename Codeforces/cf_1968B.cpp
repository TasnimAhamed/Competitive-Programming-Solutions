#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        string a, b;
        cin >> a >> b;
        int st = 0;
        for(int i = 0; i < m; i++){
            if(b[i] == a[st]){
                ++st;
            }
        }

        cout << st << '\n';


    }
    return 0;
}

