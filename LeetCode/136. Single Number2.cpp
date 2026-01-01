class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> s;
        for(auto num : nums){
            if(s.count(num) == 1){
                s.erase(num);
            }
            else{
                s.insert(num);
            }
        }
        return *s.begin();
    }
};