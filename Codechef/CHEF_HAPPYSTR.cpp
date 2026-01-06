#include<bits/stdc++.h>
using namespace std;

int check_vowel(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return 1;

    return 0;
}

void solve(){

    string s;
    cin >> s;

    int paisi = 0;

    for(int  i = 0; i < s.size() - 2; i++){
        if(check_vowel(s[i]) && check_vowel(s[i+1]) && check_vowel(s[i+2])){
            paisi = 1;
            break;
        }
    }

    if( paisi ) cout << "Happy\n";
    else cout << "Sad\n";
}

int main()
{
    int t;  cin >> t;

    while(t--) solve();

    return 0;
}