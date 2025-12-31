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
        if(v[0]!= 1){
            cout << "NO\n";
        }
        else{
            int tt = n;
            while(tt--){
                for(int i = 1; i < n-1; i++){
                    if(v[i] > v[i-1] and v[i] > v[i+1]){
                        swap(v[i], v[i+1]);
                    }
                }
            }
            int paisi = 0;
            for(int i = 0; i < n; i++){
                if(v[i] != i + 1){
                    cout << "NO\n";
                    paisi = 1;
                    break;
                }
            }
            if(!paisi) cout << "YES\n";
        }
    }

    return 0;

}
