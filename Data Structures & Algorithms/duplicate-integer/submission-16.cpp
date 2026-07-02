class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> unique;
        for(int i = 0; i < nums.size(); i++) {
            if(unique.contains(nums[i])) {
                return true;
            } else {
                unique.insert(nums[i]);
            }
        }
        return false;
    }
};