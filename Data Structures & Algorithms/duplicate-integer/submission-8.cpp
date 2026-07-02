class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> m;
        for(int i = 0; i < nums.size(); i++) {
            if(m[nums[i]] >= 1) {
                cout << m[nums[i]];
                return true;
            } else m[nums[i]]++;
            cout << m[nums[i]] << nums[i] << endl;
        }
        return false;
    };
};