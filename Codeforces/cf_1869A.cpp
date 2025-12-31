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
        for(auto &x : v) cin >> x;
        int cnt = count(v.begin(), v.end(), 0);
        if(cnt == n) cout << 0 << en;
        else if(n%2 == 0){
            cout << 2 << en;
            cout << 1 << " " << n << en;
            cout << 1 << " " << n << en;
        }
        else{
            cout << 4 << "\n";
            cout << 1 << " " << n-1 << en;
            cout << 1 << " " << n-1 << en;
            cout << n-1 << " " << n << en;
            cout << n-1 << " " << n << en;
        }
    }

    return 0;

}
