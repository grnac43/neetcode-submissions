class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<int,set<char>> rowSet, colSet;

        map<pair<int,int>, set<char>> sqareSet;

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.') continue;

                pair<int,int> key = {i/3,j/3};
                if(rowSet[i].count(board[i][j])
                || colSet[j].count(board[i][j])
                || sqareSet[key].count(board[i][j])){
                    return false;
                }

                rowSet[i].insert(board[i][j]);
                colSet[j].insert(board[i][j]);
                sqareSet[key].insert(board[i][j]);
            }
        }

        return true;
    }
};
