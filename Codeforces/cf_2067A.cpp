#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int x, y; cin >> x >> y;
        if((y-x)==1){
            cout << "Yes\n";
        }
        else{
            int rem = x - y;
            if(rem%9 == (8)){
                cout << "Yes\n";
            }
            else{
                cout << "No\n";
            }
        }
    }

    return 0;

}
