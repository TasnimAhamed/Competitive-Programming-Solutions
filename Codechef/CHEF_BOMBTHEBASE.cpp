#include<bits/stdc++.h>
using namespace std;



int main()

{

    int t;
    cin >> t;

    while(t--){
        long long int n, k, idx=-1, cnt = 0;
        cin >> n >> k;

        long long int v[n+5];

        for(int i = 0; i< n; i++){
            cin >> v[i];
            if(v[i] < k){
                ++cnt;
                v[i] = 0;
                idx = i;
            }
        }

        for(int i = idx; i >=0; i--){
            if(v[i] != 0){
                ++cnt;
            }
        }

        cout << cnt << '\n';

    }

    return 0;

}