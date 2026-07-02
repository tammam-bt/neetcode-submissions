class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1,i;
        while(l<=r) {
            i = (l+r)/2;
            cout << l << " " << i << " " << r << " "<< endl;
            if(nums[i] == target) return i;
            if(nums[l] == target) return l;
            if(nums[r] == target) return r;
            if(nums[l] > nums[i]) {
                if(nums[i] < target && target < nums[r]) l = i+1;
                else r = i-1;
            } else {
                cout << "3sba" << (nums[l] < target< nums[i]);
                if(nums[l] < target && target < nums[i]) r = i-1;
                else l = i+1;
            }
        }
        return -1;

    }
};
