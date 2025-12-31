#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    map<string, string> old, nw;
    for(int i = 0; i < n; i++){
        string a, b; cin >> a >> b;
        if(old.find(a) == old.end() and nw.find(a) == nw.end()){
            old[a] = b;
            nw[b] = a;
        }
        else{
            string str = nw[a];
            old[str] = b;
            nw[b] = str;
            nw.erase(a);
        }
    }

    cout << old.size() << "\n";
    for(auto pr : old){
        cout << pr.first << " " << pr.second << "\n";
    }

    return 0;

}
