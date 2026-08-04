class Solution {
public:

    // Check if placing a queen at (row, col) is safe
    bool isSafe(vector<string>& board, int row, int col)
    {
        int n = board.size();

        // Check Column
        for(int i = 0; i < n; i++)
        {
            if(board[i][col] == 'Q')
                return false;
        }

        // Check Upper Left Diagonal
        for(int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        {
            if(board[i][j] == 'Q')
                return false;
        }

        // Check Upper Right Diagonal
        for(int i = row, j = col; i >= 0 && j < n; i--, j++)
        {
            if(board[i][j] == 'Q')
                return false;
        }

        return true;
    }

    // Backtracking function
    void solve(int row,
               vector<string>& board,
               vector<vector<string>>& ans)
    {
        int n = board.size();

        // Base Case
        if(row == n)
        {
            ans.push_back(board);
            return;
        }

        // Try every column in the current row
        for(int col = 0; col < n; col++)
        {
            if(isSafe(board, row, col))
            {
                // Choose
                board[row][col] = 'Q';

                // Explore
                solve(row + 1, board, ans);

                // Undo (Backtrack)
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;

        vector<string> board(n, string(n, '.'));

        solve(0, board, ans);

        return ans;
    }
};