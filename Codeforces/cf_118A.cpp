#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){
        if(tolower(s[i])=='a' || tolower(s[i])=='e' || tolower(s[i])=='i' || tolower(s[i])=='o' || tolower(s[i])=='u' || tolower(s[i])=='y') continue;
        else{
            printf(".%c",tolower(s[i]));
        }
    }
    printf("\n");


    return 0;
}
