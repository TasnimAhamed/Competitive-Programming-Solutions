#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int t; cin >> t;
    while(t--){
        int a, b, c, d; cin >> a >> b >> c >> d;
        if(a > b) swap(a,b);
        if(c > d) swap(c,d);

        if(a> c and a < d){
            if(b < c or b > d){
                cout << "YES" << '\n';
            }
            else{
                cout << "NO" << '\n';
            }
        }
        else if( b > c and b < d ){
            if(a < c or a > d){
                cout << "YES" << '\n';
            }
            else{
                cout << "NO" << '\n';
            }
        }
        else{
            cout << "NO" << '\n';
        }

    }
    return 0;
}

