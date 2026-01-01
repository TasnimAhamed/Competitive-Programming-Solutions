class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int mi  = INT_MAX, sz;

        for(auto str : strs){
            sz = str.size();
            mi = min(mi, sz);
        }

        string ans = "";

        for(int i = 0; i < mi; i++){
            char ch = strs[0][i];
            int paisi = 1;
            for(auto str : strs){
                if(str[i] != ch){
                    paisi = 0;
                    break;
                }
            }
            if(!paisi) break;
            ans += ch;
        }

        return ans;
    }
};