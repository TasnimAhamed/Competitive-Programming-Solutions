class Solution {
public:
    int countKeyChanges(string s) {
        int cnt = 0;
        int len = s.size();
        for (auto &ch : s) {
            if(isupper(ch)) {
                ch += 32;
            }
        }
        for (int i = 1; i < len; i++) {
            if(s[i] != s[i - 1]) {
                ++cnt;
            }
        }
        return cnt;
    }
};