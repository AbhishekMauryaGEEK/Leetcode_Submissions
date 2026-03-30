class Solution {
public:
    bool checkValid(vector<vector<int>>& board) {
        vector<set<char>> row(board.size()), col(board.size());
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board.size(); j++) {
               char val = board[i][j];
                if (row[i].count(val)) {
                    return false;
                }
                if (col[j].count(val)) {
                    return false;
                }
                row[i].insert(val);
                col[j].insert(val);
            }
        }
        return true;
    }
};