class Solution {
public:
    int minHeight(int h1, int h2) {
        return (h1>h2)? h2 : h1;
    }

    int maxArea(vector<int>& heights) {
        int res = 0, temp;
        int i = 0, j = heights.size()-1;
        while(i<j) {
            temp = (j - i) * minHeight(heights[i],heights[j]);
            for(int k = 0; k < heights.size(); k++) {
                cout << " ";
                if(k==i) cout << heights[i];
                else {
                    if(k==j) cout << heights[j];
                    else cout << " . ";
                }    
            }
            cout << endl;
            // cout << temp << " = " << i << ": " << heights[i] << " - " << j << ": " << heights[j] << endl;
            if(temp > res) {
                res = temp;
            }
            if(heights[i]<heights[j]) {
                cout << "Moved right" << endl;
                i++;
            } else {
                cout << "Moved left" << endl;
                j--;
            }
        }
        return res;
    }
};
