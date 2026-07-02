class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size()), prefix(nums.size()), suffix(nums.size());
        int j;
        for(int i = 0; i < nums.size(); i++) {
            j = nums.size() - 1 - i;
            prefix[i] = (i == 0)? 1 : prefix[i-1]*nums[i-1];
            suffix[j] = (j == nums.size() - 1)? 1 : suffix[j+1]*nums[j+1];
        }
        for(int i = 0; i < nums.size(); i++) {
            cout << prefix[i] << " " << suffix[i] << endl;
            res[i] = prefix[i] * suffix[i];
        }
        return res;
    }
};
