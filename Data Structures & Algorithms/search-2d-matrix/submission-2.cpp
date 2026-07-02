class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int min = 0, max = matrix.size() - 1, i,j;
        while(min <= max) {
            i = (min + max) / 2;
            if(matrix[i][0] == target) return true;
            if(matrix[i][0] < target) {
                if(i == matrix.size() - 1) break;
                if(target < matrix[i+1][0]) break;
                min = i + 1;
            }
            else max = i-1;
        }
        cout << i << endl;
        min = 0; max = matrix[0].size() - 1; 
        while(min <= max) {
            j = (min + max) / 2;
            if(matrix[i][j] == target) return true;
            if(matrix[i][j] < target) min = j+1;
            else max = j-1;
        }
        cout << j << endl;
        return false;
    }
};
