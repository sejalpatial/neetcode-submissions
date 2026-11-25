class Solution {
public:
    bool row( vector<vector<char>>& board)
    {
        for(int i=0;i<9;i++)
        {   unordered_map<char,int>mp;
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.') continue;
                mp[board[i][j]]++;
                if(mp[board[i][j]]>1) return false;
            }   
        }
        return true;
    }
    bool col( vector<vector<char>>& board)
    {
        for(int j=0;j<9;j++)
        {   unordered_map<char,int>mp;
            for(int i=0;i<9;i++)
            {
                if(board[i][j]=='.') continue;
                mp[board[i][j]]++;
                if(mp[board[i][j]]>1) return false;
            }   
        }
        return true;
    }
    bool grid(vector<vector<char>>& board)
{
    for(int i = 0; i < 9; i += 3)
    {
        for(int j = 0; j < 9; j += 3)
        {
            unordered_map<char,int> mp;

            for(int r = i; r < i + 3; r++)
            {
                for(int c = j; c < j + 3; c++)
                {
                    if(board[r][c] == '.') continue;

                    mp[board[r][c]]++;

                    if(mp[board[r][c]] > 1)
                        return false;
                }
            }
        }
    }
    return true;
}
    bool isValidSudoku(vector<vector<char>>& board) {
      
        if(row(board)&&col(board)&&grid(board))
        {
            return true;
        }
        return false;
    }
};
