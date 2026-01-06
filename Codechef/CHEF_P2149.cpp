#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int l, w, x;
        cin >> l >> w >> x;

        int area1 = l * w;
        int area2 = x * x;
        if(area2 >= area1){
            cout << 0 << "\n";
        }
        else{
            if(l >= w){
                area1 = 1 * w;
                if(area2 >= area1){
                    cout << 1 << "\n";
                }
                else{
                    cout << 2 << "\n";
                }
            }
            else{
                area1 = 1 * l;
                if(area2 >= area1){
                    cout << 1 << "\n";
                }
                else{
                    cout << 2 << "\n";
                }
            }
        }
    }

    return 0;

}
