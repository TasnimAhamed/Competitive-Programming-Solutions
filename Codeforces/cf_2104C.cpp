#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    vector<int> alice, bob;
    for(int i = 0; i < n; i++){
        if(s[i] == 'B'){
            bob.push_back(i+1);
        }
        else {
            alice.push_back(i+1);
        }
    }
    int a_sz = alice.size();
    int b_sz = bob.size();

    int mx_a = alice[a_sz - 1];
    int mn_a = alice[0];
    int mx_b = bob[b_sz - 1];
    int mn_b = bob[0];

    if(mx_a > mx_b){
        if(mx_a == n and mn_b == 1){
            if(a_sz == 1){
                cout << "Bob\n";
            }
            else{
                int smx = alice[a_sz - 2];
                if(smx > mx_b){
                    cout << "Alice\n";
                }
                else{
                    cout << "Bob\n";
                }
            }
        }
        else{
            cout << "Alice\n";
        }
    }
    else{
        if(mn_a == 1){
            if(b_sz == 1 and mx_b == n){
                cout << "Alice\n";
            }
            else{
                cout << "Bob\n";
            }
        }
        else{
            cout << "Bob\n";
        }
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

