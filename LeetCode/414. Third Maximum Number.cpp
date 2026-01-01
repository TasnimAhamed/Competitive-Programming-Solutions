class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int> v;
        for(auto num : nums){
            if(find(v.begin(), v.end(), num) != v.end()){
                v.erase(find(v.begin(), v.end(), num));
            }
            v.push_back(num);
        }
        int n = v.size();
        sort(v.begin(), v.end(), greater<int>());
        
        if(n == 1) return  *v.begin();
        if(n == 2) return max(v[0], v[1]);

        return v[2];

    }
};


/*
    Alternate Solution Using Set:

    class Solution {
    public:
        int thirdMax(vector<int>& nums) {
            set<int, greater<int>> s;
            for(auto num : nums){
                s.insert(num);
            }
            int n = s.size();
            set<int, greater<int>>::iterator it = s.begin();
            
            if( n < 3) return *s.begin();

            advance(it, 2);
            return *it;

        }
    };

*/