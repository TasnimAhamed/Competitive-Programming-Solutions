class Solution {
public:
    vector<string> printVertically(string s) {
        string word;
        vector<string> words, ans;
        stringstream iss(s);

        while(iss >> word){
            words.push_back(word);
        }

        int mx  = INT_MIN, mn = INT_MAX ;

        for(auto word : words){
            int _sz = word.size();
            mx = max(mx, _sz);
            mn = min(mn, _sz);
        }
        int st = 0, tmp = mx;

        while(tmp--){
            string str = "";
            for(auto word : words){
                int _sz = word.size();
                if(st < mn){
                    str += word[st];
                }
                else{
                    if((_sz - st) <=0){
                        int ans_sz = str.size();
                        str += " ";
                    }
                    else{
                        str += word[st];
                    }
                }
            }
            ++st;
            int ans_sz = str.size();
            while(str[--ans_sz] == ' '){
                str.pop_back();
            }
            ans.push_back(str);
        }
        return ans;
    }
};


