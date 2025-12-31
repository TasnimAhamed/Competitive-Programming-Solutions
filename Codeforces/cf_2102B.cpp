#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int checkPositive(vector<int> &v, int n){

    int ff = *v.begin();
    int need_g = n/2, need_s = n/2;
    if(n%2 == 0) need_s--;

    int g =0, s = 0;
    for(int i = 0; i < n; i++){
        if(v[i] > ff) g++;
        if(v[i] < ff) s++;
    }

    if(need_g == g and need_s == s){
        cout << "YES\n";
        return 1;
    }
    else if(g > need_g){
        for(int i = 0; i < n; i++){
            if((v[i] * -1) < ff){
                g--;
                s++;
            }
            if(need_g == g){
                break;
            }
        }

        if(need_g == g and need_s == s){
            cout << "YES\n";
            return 1;
        }
    }
    else{
        for(int i = 0; i < n; i++){
            if((v[i] * -1) > ff){
                s--;
                g++;
            }
            if(need_s == s){
                break;
            }
        }

        if(need_g == g and need_s == s){
            cout << "YES\n";
            return 1;
        }
    }

    return -1;
}

int checkNegative(vector<int> &v, int n){
    int ff = v[0] * -1;
    int need_g = n/2, need_s = n/2;
    if(n%2 == 0) need_s--;
    v[0] *= -1;
    int g = 0, s = 0;

    for(int i = 0; i < n; i++){
        if(v[i] > ff) g++;
        if(v[i] < ff) s++;
    }
    if(need_g == g and need_s == s){
        cout << "YES\n";
        return 1;
    }
    else if(g > need_g){
        for(int i = n-1; i >= 0; i++){
            if((v[i] * -1) < ff){
                g--;
                s++;
            }
            if(need_g == g){
                break;
            }
        }
        if(need_g == g and need_s == s){
            cout << "YES\n";
            return 1;
        }
    }
    else{
        for(int i = 0; i < n; i++){
            if((v[i] * -1) > ff){
                s--;
                g++;
            }
            if(need_s == s){
                break;
            }
        }

        if(need_g == g and need_s == s){
            cout << "YES\n";
            return 1;
        }
    }

    return -1;
}

void solve(){
    int n; cin >> n;
    vector<int> v(n);

    for(auto &x : v) cin >> x;

    if(checkPositive(v, n) == 1 or checkNegative(v, n) == 1) return;
    cout << "NO\n";
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

