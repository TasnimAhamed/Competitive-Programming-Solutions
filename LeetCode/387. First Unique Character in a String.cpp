class Solution {
public:
    int firstUniqChar(string s) {
        int idx[26]= {0};
        for (auto ch : s) {
            idx[ch - 'a']++;
        }
        for (int i = 0; i < s.size(); i++) {
            if(idx[s[i] - 'a'] == 1) {
                return i;
            }
        }
        return -1;
    }
};