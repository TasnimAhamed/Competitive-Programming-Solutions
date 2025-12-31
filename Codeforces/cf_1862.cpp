#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int cnt=0;
        string s[n+5];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(cnt==0 && s[j][i]=='v'){
                    cnt++;
                    break;
                }
                else if(cnt==1 && s[j][i]=='i'){
                    cnt++;
                    break;
                }
                else if(cnt==2 && s[j][i]=='k'){
                    cnt++;
                    break;
                }
                else if(cnt==3 && s[j][i]=='a'){
                    cnt++;
                    break;
                }
                //cout<<s[j][i]<<endl;
            }
        }

        if(cnt==4) cout<<"YES\n";
        else cout<<"NO\n";
    }


    return 0;
}
