class Solution {
public:
    bool checkIfPangram(string sentence) {
        int idx[26] = {0};
        for (auto ch : sentence) {
            idx[ch - 'a']++;
        }
        for (auto x : idx) {
            if(!x) {
                return false;
            }
        }
        return true;
    }
};