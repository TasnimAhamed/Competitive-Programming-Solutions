class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2) return true;
        int st = -1 , en = -1;

        for(int i = 0; i < s1.size(); i++){
            if(s1[i] != s2[i]){
                if(st == -1) st= i;
                else if(en == -1) en = i;
                else return false;
            }
        }

        if(en == -1) return false;

        if(s1[st] == s2[en] and s1[en] == s2[st]) return true;

        return false;

    }
};

/*
    Optimized: Solution

    class Solution {
    public:
        bool areAlmostEqual(string s1, string s2) {
            if(s1 == s2) return true;
            int st = 0 , en = s1.size() - 1;

            while(s1[st] == s2[st]) st++;
            while(s1[en] == s2[en]) --en;

            swap(s1[st], s1[en]);

            return s1 == s2;

        }
    };

*/