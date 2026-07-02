class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res(2);
        int minus;
        for(int i = 0; i < numbers.size(); i++) {
            minus = target - numbers[i];
            for(int j = numbers.size() - 1; j > i; j--) {
                if(numbers[j]==minus) {
                    res[0] = i+1; res[1] = j+1;
                    return res;
                }
                if(numbers[j] < minus) break;
            }
        }
        return res;
    }
};
