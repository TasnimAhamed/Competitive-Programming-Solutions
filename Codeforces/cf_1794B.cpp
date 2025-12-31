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
        for(auto &x : v) if(x == 1) ++x;

        for(int i = 0; i < n-1; i++){
            if(v[i+1]%v[i] == 0){
                v[i+1]++;
            }
        }

        for(auto x : v) cout << x << " ";
        cout << "\n";
    }

    return 0;

}
