class Solution {
public:
    static int min(int a, int b) {
        return (a<b)? a:b;
    }

    int trap(vector<int>& height) {
        vector<int> prefix_max(height.size()),suffix_max(height.size());
        int res = 0;
        int pre_max = height[0],suff_max = height[height.size()-1];
        for(int i = 0; i < height.size(); i++) {
            if(height[i]>pre_max) {
                pre_max = height[i];
            }
            if(height[height.size()-1-i] > suff_max) {
                suff_max = height[height.size()-1-i];
            }
            prefix_max[i] = pre_max;
            suffix_max[height.size()-1-i] = suff_max;
        }
        for(int i = 0; i < height.size(); i++) {
            res += min(prefix_max[i],suffix_max[i]) - height[i];
            cout << res << endl;
        }
        return res;
    }
};
