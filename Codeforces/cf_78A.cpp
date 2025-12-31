#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool isVowel(char ch){
    if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u') return true;

    return false;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);

    int cnt = 0, cnt2 = 0, cnt3 = 0;

    for(auto ch : a){
        if(isVowel(ch)) ++cnt;
    }

    for(auto ch : b){
        if(isVowel(ch)) ++cnt2;
    }

    for(auto ch : c){
        if(isVowel(ch)) ++cnt3;
    }

    if(cnt == 5 and cnt2 == 7 and cnt3 == 5) cout << "YES" << '\n';
    else cout << "NO" << '\n';

    return 0;

}
