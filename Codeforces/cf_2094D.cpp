#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string p, s; cin >> p >> s;
    int plen = p.size();
    int slen = s.size();

    vector<pair<char, int>> pcnt;
    vector<pair<char, int>> scnt;
    int l = 0, r = 0;
    for(int i = 0; i < plen; i++){
        if(p[i] == 'L'){
            if(r != 0){
                pcnt.push_back({'R', r});
                r = 0;
            }
            l++;
        }
        else{
            if(l != 0){
                pcnt.push_back({'L', l});
                l = 0;
            }
            r++;
        }
    }

    if(l != 0){
        pcnt.push_back({'L', l});
        l = 0;
    }

    if(r != 0){
        pcnt.push_back({'R', r});
        r = 0;
    }
    r = 0, l = 0;
    for(int i = 0; i < slen; i++){
        if(s[i] == 'L'){
            if(r != 0){
                scnt.push_back({'R', r});
                r = 0;
            }
            l++;
        }
        else{
            if(l != 0){
                scnt.push_back({'L', l});
                l = 0;
            }
            r++;
        }
    }

    if(l != 0){
        scnt.push_back({'L', l});
        l = 0;
    }

    if(r != 0){
        scnt.push_back({'R', r});
        r = 0;
    }

    if(pcnt.size() != scnt.size()){
        cout << "NO\n";
    }
    else{
        int paisi = 1;
        for(int i = 0; i < scnt.size(); i++){
            auto [pchar, pcount] = pcnt[i];
            auto [schar, scount] = scnt[i];
            if(pchar == schar and scount >= (pcount) and (scount<= (2*pcount))){
                continue;
            }
            else{
                paisi = 0;
                break;
            }
        }
        if(paisi){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
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

