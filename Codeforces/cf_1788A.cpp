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
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        for(int i = 1; i < n; i++){
            v[i] *= v[i-1];
        }

        int paisi = 0;
        for(int i = 0; i < n-1; i++){
            int ff = v[i];
            int ss = v[n-1]/ff;
//            cout << ff << " " << ss << "\n";
            if(ff == ss){
                cout << i+1 << "\n";
                paisi = 1;
                break;
            }
        }
        if(!paisi) cout << -1 << "\n";
    }

    return 0;

}
