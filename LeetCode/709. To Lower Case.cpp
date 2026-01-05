class Solution {
public:
    string toLowerCase(string s) {
        for (auto &ch : s) {
            if(isupper(ch)) {
                ch += 32;
            }
        }

        return s;
    }
};