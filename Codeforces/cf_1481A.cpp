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
        int px, py; cin >> px >> py;
        string s; cin >> s;
        int x(0), y(0);

        for(auto ch : s){
            if(px > x and ch == 'R' and px != x) ++x;
            else if(px < x and ch == 'L' and px != x) --x;

            if(py > y and ch == 'U' and py != y) ++y;
            else if(py < y and ch == 'D' and py != y) --y;
        }
        if(px == x and py == y){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }

    return 0;

}
