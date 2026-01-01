class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> v;
        unordered_set<int> s;
        for(auto num : nums ){
            v.push_back(num);
            if(s.count(num) == 1){
                s.erase(num);
            }
            else{
                s.insert(num);
            }
        }
        int res;
        for(auto num : s){
            if(count(v.begin(), v.end(), num) == 1){
                res = num;
                break;
            }
        }
        return res;
    }
};