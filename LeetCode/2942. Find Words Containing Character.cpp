class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int len = words.size();
        for (int i = 0; i < len; i++) {
            for (auto ch : words[i]) {
                if(ch == x) {
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};