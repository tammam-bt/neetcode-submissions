class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        int zeros = 0, zero_index = 0;
        int mult = 1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                zero_index = i;
                zeros++;
            } else {
                mult *= nums[i];
            } 
            if(zeros>1) {
                return res;
            }
        }
        if(zeros == 0) {
            for(int i = 0; i < nums.size(); i++) {
                res[i] = mult / nums[i];
                }
        } else {
            res[zero_index] = mult;
        }
        return res;
    }
};
