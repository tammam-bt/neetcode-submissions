class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        for(int i = 0; i < nums.size(); i++) {
            res[i] = 1;
            for(int j = 0; j < nums.size(); j++) {
                if(j != i) res[i] *= nums[j];
            }
        }
        return res;
    }
};
