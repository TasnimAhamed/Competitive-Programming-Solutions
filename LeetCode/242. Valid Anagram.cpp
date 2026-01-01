class Solution {
public:
    bool isAnagram(string s, string t) {
        
        map<char, int> mp;

        for(auto ch : s){
            mp[ch]++;
        }

        for(auto ch : t){
            mp[ch]--;
        }

        for(auto pr : mp){
            if(pr.second != 0){
                return false;
            }
        }


        return true;

    }
};