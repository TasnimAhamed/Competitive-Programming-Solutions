class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;

        for(auto str : strs){
            string word = str;
            sort(word.begin(), word.end());
            mp[word].push_back(str);

        }

        vector<vector<string>> ans;

        for(auto pr : mp){
            ans.push_back(pr.second);
        }

        return ans;

    }
};