#include<bits/stdc++.h>
using namespace std;
#define int long long int

void reverseArray(vector<int> &v, int i, int cnt){
    int st = i-1, en = i - cnt;
    while(st > en){
        swap(v[st], v[en]);
        en++;
        st--;
    }

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v(n);

        for(auto &x : v) cin >> x;

        if(k == 1){
            int paisi = 0;
            for(int i = 1; i < n; i++){
                if(v[i] < v[i-1]){
                    paisi = 1;
                    break;
                }
            }
            if(paisi) cout << "NO\n";
            else cout << "YES\n";
        }
        else{
            cout << "YES\n";
        }

    }

    return 0;

}
