class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> row(9), col(9);
        vector<set<char>>box(9);
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board.size(); j++) {
                int boxind =(i/3)*3+(j/3);
                if (board[i][j] == '.')
                    continue;
               char val = board[i][j];
                if (row[i].count(val)) {
                    return false;
                }
                if (col[j].count(val)) {
                    return false;
                }
                if(box[boxind].count(val)){
                    return false;
                }
                box[boxind].insert(val);
                row[i].insert(val);
                col[j].insert(val);
            }
        }
        return true;
    }
};