#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string a, b; cin >> a >> b;

    for(int i = 0 ; i < a.size(); i++){
        if(tolower(a[i]) != tolower(b[i])){
            if(tolower(a[i]) < tolower(b[i])){
                cout << -1 << '\n';
            }
            else{
                cout << 1 << '\n';
            }
            return 0;
        }
    }

    cout << 0 << '\n';

    return 0;

}
