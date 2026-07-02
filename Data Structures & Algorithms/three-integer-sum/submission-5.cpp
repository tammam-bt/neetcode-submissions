class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        int sum;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i+1; j < nums.size(); j++) {
                for(int k = j+1; k < nums.size(); k++) {
                    sum = nums[i] + nums[j] + nums[k];
                    temp = {nums[i],nums[j],nums[k]};
                    if(sum == 0 && find(res.begin(),res.end(),temp) == res.end()) res.push_back(temp);
                }
            }
        }
        return res;
    }
};
