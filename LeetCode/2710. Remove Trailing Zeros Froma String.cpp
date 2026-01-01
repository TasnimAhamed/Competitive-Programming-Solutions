class Solution {
public:
    string removeTrailingZeros(string num) {
        string ans ="";
        int paisi = 0;
        for(int i = num.size() - 1; i >= 0; i--){
            if( num[i] == '0' && !paisi) continue;
            ans +=num[i];
            paisi = 1;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};