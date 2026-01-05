class Solution {
public:
    int xorOperation(int n, int start) {
        int xorr = 0;
        for (int i = 0; i < n; i++) {
            int nxt_num = start + 2 * i;
            xorr ^= nxt_num;
        }
        return xorr;
    }
};