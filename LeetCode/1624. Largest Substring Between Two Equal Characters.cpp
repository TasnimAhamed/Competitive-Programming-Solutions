class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int mx  = -1;
        int sz  = s.size(), st  = 0 , en = sz - 1;

        while(st < sz){
            while(st < en){
                if( s[st] == s[en]){
                    mx = max(mx, en - st - 1);
                    break;
                }
                else{
                    --en;
                }
            }
            ++st;
            en = sz - 1;
        }

        return mx;
    }
};