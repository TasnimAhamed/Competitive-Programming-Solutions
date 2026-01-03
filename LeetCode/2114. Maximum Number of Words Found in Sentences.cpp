class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int mx = -1;
        for (auto sentence : sentences) {
            stringstream ss(sentence);
            string word;
            int cnt = 0;
            while(ss >> word) {
                ++cnt;
            }
            mx = max(mx, cnt);
        }

        return mx;
    }
};