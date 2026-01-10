#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    for(int i = 1; i <= 9; i++){
        if(n%i == 0){
            if(n/i <= 9){
                cout << "Yes\n";
                return 0;
            }
        }
    }

    cout << "No\n";

    return 0;

}
