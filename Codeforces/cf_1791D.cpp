#include<bits/stdc++.h>
using namespace std;

int main()
{
    int _;
    cin>>_;
    while(_--){

        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> cnt1(26,0),cnt2(26,0),first(n,0),second(n,0);
        int tmp=0;
        for(int i=0;i<n;i++){
            if(cnt1[s[i]-'a'] == 0) {
                tmp++;
                cnt1[s[i]-'a'] = 1;
            }
            first[i] = tmp;
        }
        tmp = 0;
        for(int i=n-1;i>=0;i--){
            if(cnt2[s[i]-'a'] == 0) {
                tmp++;
                cnt2[s[i]-'a'] = 1;
            }
            second[i] = tmp;
        }
        int ans =-1;
        for(int i =1;i<n;i++){
            ans = max(ans, (first[i-1]+second[i]));
        }
        cout<<ans<<endl;
    }

    return 0;
}
