class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int res = 0, len = heights.size(), area;
        stack<pair<int,int>> s;
        for(int i = 0; i < len; i++) {
            res = (res > heights[i])? res : heights[i];
            if(empty(s)) s.push({i,heights[i]});
            else {
                int idx = i;
                while(!empty(s) && s.top().second > heights[i]) {
                    idx = s.top().first;
                    area = s.top().second * (i - s.top().first);
                    cout << area << i << endl;
                    res = (res > area)? res : area; 
                    s.pop();
                }
                s.push({idx,heights[i]});
            }
        }
        while(!empty(s)) {
            cout << s.top().first << " " << s.top().second << endl;
            area = s.top().second * (len - s.top().first);
            res = (res > area)? res : area; 
            s.pop();
        }
        return res;
    }
};
