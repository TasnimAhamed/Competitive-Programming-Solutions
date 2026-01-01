class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        
        hc.push_back(h);
        sort(hc.begin(), hc.end());

        vc.push_back(w);
        sort(vc.begin(), vc.end());

        int maxh = hc[0], maxw = vc[0];

        for(int i = 1; i < hc.size(); i++){
            maxh = max(maxh, abs(hc[i] - hc[i-1]));
        }

        for(int i = 1; i < vc.size(); i++){
            maxw = max(maxw, abs(vc[i] - vc[i-1]));
        }

        return ((1LL * maxh * maxw) % 1000000007);


    }
};


/*

    Visual Explanation : https://leetcode.com/problems/maximum-area-of-a-piece-of-cake-after-horizontal-and-vertical-cuts/solutions/661995/do-you-like-visual-explanation-you-got-it-with-2-code-variations/

*/