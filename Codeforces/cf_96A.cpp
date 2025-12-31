#include<bits/stdc++.h>
#define rep(st,en,i) for(int i=st;i<en;i++)
using namespace std;

int main()
{
    string s;
    cin>>s;
    int zero=0,one=0;
    int paisi=0;
    rep(0,s.size(),i){
        if(s[i]=='0'){
            ++zero;
            one=0;
            if(zero==7){
                printf("YES\n");
                paisi=1;
                break;
            }
        }
        else{
            ++one;
            zero=0;
            if(one==7){
                printf("YES\n");
                paisi=1;
                break;
            }
        }
    }

    if(!paisi) printf("NO\n");



    return 0;
}
