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
        for(auto &x:v) cin >> x;
        sort(v.begin(), v.end());
        int paisi = 0;
        for(int i = 0; i < n; i++){
            int isFound = 0;
            for(int j = i+1; j < n; j++){
                int gcd = __gcd(v[i], v[j]);
                if(gcd <= 2){
                    isFound = 1;
                    break;
                }
            }
            if(isFound){
                paisi = 1;
                break;
            }
        }
        if(paisi) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;

}
