class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char , int> mp;
        vector<int> ans;

        int sz = s.size();

        for(int i = 0; i < sz; i++){
            mp[s[i]] = i;
        }
        int pos = -1, st = 0;
        for(int i = 0; i < sz; i++){
            int en = mp[s[i]];
            if( st == en){
                ans.push_back(1);
                st = en+1;
            }
            else if(en > pos){
                pos = en;
            }
            else{
                if(pos == i){
                    ans.push_back(pos - st + 1);
                    pos = -1;
                    st = en+1;
                }
            }
        }

        return ans;

    

    }
};
