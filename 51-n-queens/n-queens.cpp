class Solution {
public:

 vector<vector<string>>res;
bool isvalid(vector<string>board,int row,int col)
{//upward
   for(int i=row;i>=0;i--)
   {
    if(board[i][col]=='Q')
    {
        return false ; 
    }
   }
   //diagonally upward left 
   for(int i=row,j=col ; i>=0 && j>=0 ; i-- ,j-- ){
     if(board[i][j]=='Q')
    {
        return false ; 
    }
   }
   //diagonally upward right 
   for(int i=row,j=col; i>=0 && j<board.size();i--,j++)
   {
      if(board[i][j]=='Q')
    {
        return false ; 
    }
   }
   return true ; 
}
void solve(vector<string>board,int row)
{
    if(row>=board.size())
    {
        res.push_back(board); //exceeds the booard size then push the board to the result vector 
        return ; 
    }
   
        for(int i=0;i<board.size();i++)
        {
          if(isvalid(board , row,i))
          {
             board[row][i]='Q'; //put 'Q ' if there are no other queens attacking 
             solve(board,row+1);//recursively checking other rows 
             board[row][i]='.'; //put '.' and check for other columns 
          }
        }
        
    
}
    vector<vector<string>> solveNQueens(int n) {
        if(n==0)
        {
            return {};
        }
        vector<string>board(n,string(n,'.'));
        solve(board,0);
        return res;
    }
};