#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin >> n;
    if(n%2 == 0) {
        cout << -1 << "\n";
    }
    else{
        vector<int> v(n+1);
        int mid = (n+1)/2;
        int tmp = mid;
        for(int i = mid; i <= n; i++){
            v[i] = (tmp%n);
            if(tmp%n == 0){
                tmp = n;
                v[i] = n;
            }
            tmp += 2;
        }
        tmp = mid-2;
        for(int i = mid - 1; i >= 1; i--){
            v[i] = (tmp%n);
            if(tmp%n == 0){
                tmp = n;
                v[i] = n;
            }
            tmp -= 2;
            if(tmp <= 0) tmp += n;
        }

        for(int i = 1; i <= n; i++){
            cout << v[i] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}

