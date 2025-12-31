#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        if(a%2 == 1){
            cout << "NO\n";
        }
        else{
            if(a%2 == 0 and b%2 == 0){
                cout << "YES\n";
            }
            else{
                b %= 2;
                if(b == 1 and a >=2){
                    cout << "YES\n";
                }
                else{
                    cout << "NO\n";
                }
            }
        }

    }

    return 0;

}
