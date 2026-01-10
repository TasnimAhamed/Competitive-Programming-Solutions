#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
    return a>b? a:b;
}
int main()
{
    string s;
    cin>>s;
    int mx =1;
    for(int i=1;i<=s.size();i++){
        for(int j=0;j<=s.size()-i;j++){
            string _substr = s.substr(j,i);
            string rev_substr = _substr;
            reverse(rev_substr.begin(),rev_substr.end());

            if(_substr == rev_substr ){
                mx = max(mx,_substr.size());
            }
        }
    }
    printf("%d\n",mx);
    return 0;
}
