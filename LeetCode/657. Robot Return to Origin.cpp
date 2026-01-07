class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for (auto move : moves) {
            if(move == 'L') {
                --y;
            }
            else if(move == 'R') {
                ++y;
            }
            else if(move == 'D') {
                ++x;
            }
            else {
                --x;
            }
        }
        return x == 0 and y == 0;
    }
};