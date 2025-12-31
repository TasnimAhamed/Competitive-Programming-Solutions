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
        int n, k, x; cin >> n >> k >> x;
        if(k == 1 and x == 1) cout << "NO\n";
        else{
            if(x != 1){
                cout << "YES\n";
                cout << n << "\n";
                for(int i = 1; i <= n; i++){
                    cout << 1 << " ";
                }
                cout << en;

            }
            else{
                if(k == 2 and n%2 == 1) cout << "NO\n";
                else{
                    cout << "YES\n";
                    if(n&1){
                        cout << n/2 << "\n";
                        for(int i = 1; i <n/2; i++){
                            cout << 2 << " ";
                        }
                        cout << 3 << en;
                    }
                    else{
                        cout << n/2 << "\n";
                        for(int i = 1; i <=n/2; i++){
                            cout << 2 << " ";
                        }
                        cout << en;
                    }
                }
            }
        }
    }

    return 0;

}
