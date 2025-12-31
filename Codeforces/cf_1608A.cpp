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
        int n, st = 2; cin >> n;
        while(n--){
            cout << st << " ";
            st++;
        }
        cout << en;
    }

    return 0;

}
