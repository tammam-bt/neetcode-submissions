class Solution {
public:
    int search(vector<int>& nums, int target) {
        int min = 0,max = nums.size()-1,i;
        while(min<max) {
            i = (min + max) / 2;
            cout << i << min << max << endl;
            if(nums[i] == target) return i;
            if(nums[i] < target) min = i+1;
            else max = i-1;
        }
        if(nums[min] == target) return min;
        if(nums[max] == target) return max;
        return -1;
    }
};
