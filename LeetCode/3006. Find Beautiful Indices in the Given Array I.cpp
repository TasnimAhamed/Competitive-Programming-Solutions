class Solution {
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        
        vector<int> a_idx;
        vector<int> b_idx;
        vector<int> ans;
        
        int found = s.find(a);
        
        while(found != string::npos){
            a_idx.push_back(found);
            found = s.find(a, found+1);
        }
        
        found = s.find(b);
        
        while(found != string::npos){
            b_idx.push_back(found);
            found = s.find(b, found+1);
        }
        
        for(auto x : a_idx){
            for(auto y : b_idx){
                if(abs(x-y) <= k){
                    ans.push_back(x);
                    break;
                }
            }
        }
        
        //sort(ans.begin(), ans.end());
        
        return ans;
        
    }
};