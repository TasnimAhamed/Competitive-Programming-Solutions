#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int t; cin >> t;
    while(t--){
        vector<int> v(3);

        for(int i =  0; i < 3;i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int mid = v[1];

        int ans = abs(v[0]-mid) + abs(v[2] - mid);

        cout << ans << '\n';

    }

    return 0;
}

