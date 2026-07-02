class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        vector<pair<int,int>> temp;
        vector<int> res;
        for(auto e:m) {
            temp.push_back(e);
        }
        for(auto e:temp) {
            cout << e.first << " " << e.second << endl;
        }
        sort(temp.begin(), temp.end(),
        [](const auto& a, const auto& b) {
            return a.second > b.second;
        });
        int i = 1;
        for(auto e:temp) {
            if(i > k) {
                break;
            }
            res.push_back(e.first);
            i++;
        }
        return res;
    }
};
