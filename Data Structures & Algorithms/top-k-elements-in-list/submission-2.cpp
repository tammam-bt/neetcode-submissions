class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        vector<int> res;
        vector<vector<int>> freq(nums.size()+1);
        for(const auto& e:m) {
            freq[e.second].push_back(e.first);
        }
        for(auto e:freq) {
            for(int n:e) {
                cout << n << endl;
            }
        }
        for(int i = freq.size() - 1; i>0; --i) {
            for(int  n : freq[i]) {
                res.push_back(n);   
                if(res.size() == k) {
                    return res;
                }         
            }
        }
        return res;
    }
};
