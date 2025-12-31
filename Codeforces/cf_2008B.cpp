#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int tmp = ceil(sqrt(n * 1.0));
        if((tmp * tmp ) != n){
            cout << "NO\n";
        }
        else{
            int paisi = 0;
            for(int i = 0; i < n; i++){
                if((i < tmp) or (i >= (n - tmp))){
                    if(s[i] != '1'){
                        paisi = 1;
                        break;
                    }
                }
                else{
                    if(i%tmp == 0 or (i%tmp == (tmp - 1))){
                        if(s[i] != '1'){
                            paisi = 1;
                            break;
                        }
                    }
                    else{
                        if(s[i] != '0'){
                            paisi = 1;
                            break;
                        }
                    }
                }
            }

            if(paisi){
                cout << "NO\n";
            }
            else{
                cout << "YES\n";
            }
        }
    }

    return 0;

}
