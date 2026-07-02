class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        int res = 0,temp = 0, last = 0;
        for(int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }
        if(s.size()==0) return 0;
        if(s.size()==1) return 1;
        for(auto it = s.begin(); it != s.end(); ++it) {
            auto e = *it;
            if(it != s.begin() && e == last + 1) temp++;
            else {
                temp = 0;
            }
            if(res < temp) res = temp;
            last = e;
            cout << e << " " << temp << endl;
            cout << res << endl;
        }
        return res + 1;
    }
};
