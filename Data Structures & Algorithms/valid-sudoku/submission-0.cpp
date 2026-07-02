class Solution {
public:
    static void show(vector<set<char>> v) {
        for(auto s:v) {
            for(auto e:s) {
                cout << e << " ";
            }
            cout << endl;
        }
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> boxes(9);
        vector<set<char>> horizontal(9);
        vector<set<char>> vertical(9);
        int box_index;
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++ ){
                box_index = (j/3) * 3 + i/3;
                cout << i << " " << j << " " << box_index << endl;
                cout << board[i][j] << endl;
                if(board[i][j] != '.') {
                    if(boxes[box_index].find(board[i][j]) != boxes[box_index].end()) return false;    
                    else boxes[box_index].insert(board[i][j]);
                    if(horizontal[i].find(board[i][j]) != horizontal[i].end()) return false;
                    else horizontal[i].insert(board[i][j]);
                    cout << "a" << endl;
                    if(vertical[j].find(board[i][j]) != vertical[j].end()) return false;
                    else vertical[j].insert(board[i][j]);
                }
                
            }
        }
        return true;
    }
};
