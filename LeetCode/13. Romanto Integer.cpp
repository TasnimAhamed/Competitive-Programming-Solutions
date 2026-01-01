class Solution {
public:
    int romanToInt(string s) {
       map<char, int> mp;
       mp['I'] = 1;
       mp['V'] = 5;
       mp['X'] = 10;
       mp['L'] = 50;
       mp['C'] = 100;
       mp['D'] =  500;
       mp['M'] = 1000;

        int ans = 0, n = s.size();

        for(int i = 0; i < n; i++){
            if( s[i] == 'I'){
                if((i+1) < n and s[i+1] == 'V'){
                    ans += mp[s[i+1]] - mp[s[i]];
                    ++i;
                }
                else if((i+1) < n and s[i+1] == 'X'){
                    ans += mp[s[i+1]] - mp[s[i]];
                    ++i;
                }
                else{
                    ans += mp[s[i]];
                }
            }
            else if( s[i] == 'X'){
                if((i+1) < n and s[i+1] == 'L'){
                    ans += mp[s[i+1]] - mp[s[i]];
                    ++i;
                }
                else if((i+1) < n and s[i+1] == 'C'){
                    ans += mp[s[i+1]] - mp[s[i]];
                    ++i;
                }
                else{
                    ans += mp[s[i]];
                }
            }
            else if(s[i] == 'C'){
                if((i+1) < n and s[i+1] == 'D'){
                    ans += mp[s[i+1]] - mp[s[i]];
                    ++i;
                }
                else if((i+1) < n and s[i+1] == 'M'){
                    ans += mp[s[i+1]] - mp[s[i]];
                    ++i;
                }
                else{
                    ans += mp[s[i]];
                }
            }   
            else{
                ans += mp[s[i]];
            }
        }

        return ans;

    }
};