class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()  != goal.size() or s.size() == 1) return false;

        int n = s.size(), st = - 1, en = -1, cnt= 0;

        for(int i = 0; i < n ; i++){
            if( s[i] != goal[i]){
                ++cnt;
                if(st == -1) st = i;
                else if(en == -1) en = i; 
            }
        }
        
        //cout << st << ' ' << en << '\n';

        if(cnt == 2){
            if(s[st] == goal[en] && s[en] == goal[st]) return true;
            return false;
        }
        else{
            if(cnt == 0){
                map<char, int> mp;
                for(auto ch : s) mp[ch]++;

                for(auto pr : mp){
                    if(pr.second > 1 ) return true;
                }

                return false;
            }
        }

        return false;
    }
};

/*
    Optimized Code  


    class Solution {
    public:
        bool buddyStrings(string s, string goal) {

            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
            cout.tie(NULL);

            if(s.size()  != goal.size() or s.size() == 1) return false;

            int n = s.size(), st = - 1, en = -1;

            map<char, int> mp;


            for(int i = 0; i < n; i++){
                if(s[i] != goal[i]){
                    if(st == -1) st = i;
                    else if(en == -1) en = i;
                    else return false;
                }
                mp[s[i] - 'a']++;
            }

            if(st == -1 and en == -1){
                for(auto pr : mp)
                    if(pr.second > 1) return true;
                
                return false;
            }
            else if(en == -1) return false;

            return (s[st] == goal[en] and s[en] == goal[st]);

        }
    };

*/