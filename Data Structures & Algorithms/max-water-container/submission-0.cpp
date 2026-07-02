class Solution {
public:
    int minHeight(int h1, int h2) {
        return (h1>h2)? h2 : h1;
    }

    int maxArea(vector<int>& heights) {
        int res = 0, temp;
        for(int i = 0; i < heights.size(); i++) {
            for(int j = i+1; j < heights.size(); j++) {
                cout << minHeight(heights[i],heights[j]);
                temp = (j-i) * minHeight(heights[i],heights[j]);
                cout << temp << endl;
                res = (res < temp)? temp : res;
            }
        }
        return res;
    }
};
