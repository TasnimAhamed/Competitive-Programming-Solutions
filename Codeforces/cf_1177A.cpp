#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define en "\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(auto &x : v){
            cin >> x;
            x %= 2;
        }
        int cnt = 0;
        for(int i = 0; i < n-1; i++){
            if(v[i]%2 == v[i+1]%2){
                int prod = v[i] * v[i+1];
                v[i] = prod;
                v[i+1] = prod;
                ++cnt;
            }
        }

        cout << cnt << "\n";
    }

    return 0;

}
