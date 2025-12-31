#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        string str="codeforces";
        char ch;
        scanf(" %c",&ch);
        int paisi=1;
        for(auto x:str){
            if(x==ch){
                paisi=0;
                printf("YES\n");
                break;
            }
        }
        if(paisi) printf("NO\n");

    }


    return 0;
}
