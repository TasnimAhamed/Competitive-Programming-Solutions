#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string s; cin >> s;
    int ans = 0, total_increment = 0;
    for(int i = s.size() - 1; i >= 0; i--){
        int dd = s[i] - '0';
        cout << dd << " ";
        if(dd == 0) ++ans;
        else{
            int ss = 10 - dd;
            int rem = total_increment%10;
            if(total_increment <= ss){
                dd += total_increment;
                dd%=10;
            }
            else{
                dd = 0;
                dd += rem;
            }

            int need = dd + 1;
            ans += need;
            total_increment += need;
        }
        cout << ans << " " << total_increment << "\n\n";
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
//    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}

