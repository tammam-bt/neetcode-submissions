

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        int sum,j,k,left,right;
        sort(nums.begin(),nums.end());
        for(auto e:nums) cout << e << " ";
        cout << endl;
        for(int i = 0; i < nums.size(); i++) {
            j = i+1; k = nums.size() - 1;
            while(j<k) {
                sum = nums[i] + nums[j] + nums[k];
                temp = {nums[i], nums[j], nums[k]};
                sort(temp.begin(),temp.end());
                if(sum == 0) {
                    if(find(res.begin(),res.end(), temp) == res.end()) {
                        res.push_back(temp);
                    }
                    right = (nums[i]+nums[j]+nums[k-1]>0)? nums[i]+nums[j]+nums[k-1] : 0;
                    left = (nums[i]+nums[j+1]+nums[k]>0)? nums[i]+nums[j+1]+nums[k] : 0;
                    if(left > right) {
                        k--;
                    } else {
                        j++;
                    }
                } else {
                    if(sum < 0) j++;
                    else k--;
                }
            }
        }
        return res;
    }
};
