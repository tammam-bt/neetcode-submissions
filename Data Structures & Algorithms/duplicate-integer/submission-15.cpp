class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;
        int last_size = 0;
        for(int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            s.insert(num);
            cout << num << s.size() << last_size << endl;
            if(s.size() == last_size) return true;
            else last_size++;
        }
        return false;
    };
};