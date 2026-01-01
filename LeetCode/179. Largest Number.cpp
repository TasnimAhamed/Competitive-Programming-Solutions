class Solution {

public:
    string largestNumber(vector<int>& nums) {
        vector<string> words;
        for(auto num : nums){
            words.push_back(to_string(num));
        }
        stable_sort(words.begin(), words.end(), [](string a, string b){
            return a+b > b+a;
        });
        string ans;
        for(auto word : words){
            ans +=word;
        }
        int cnt = count (ans.begin(), ans.end(), '0');
        if(cnt  == ans.size()) return "0";

        return ans;
    }
};