class Solution {
public:

 vector<vector<string>>res;

// bool isvalid(vector<string>board,int row,int col)
// {//upward
//    for(int i=row;i>=0;i--)
//    {
//     if(board[i][col]=='Q')
//     {
//         return false ; 
//     }
//    }
//    //diagonally upward left 
//    for(int i=row,j=col ; i>=0 && j>=0 ; i-- ,j-- ){
//      if(board[i][j]=='Q')
//     {
//         return false ; 
//     }
//    }
//    //diagonally upward right 
//    for(int i=row,j=col; i>=0 && j<board.size();i--,j++)
//    {
//       if(board[i][j]=='Q')
//     {
//         return false ; 
//     }
//    }
//    return true ; 
// }



void solve(vector<string>board,int row,unordered_set<int>&cols,unordered_set<int>&diag,unordered_set<int>&anti)
{
    if(row>=board.size())
    {
        res.push_back(board); //exceeds the booard size then push the board to the result vector 
        return ; 
    }

     /*
            For a square (i, j) :
            Diagonally (i-j)      is constant
            Anti diagonally (i+j) is constant
            
            We can use this to find which square(i, j)
            has a risk of being attacked by another queen
            placed already in 'diagonal', or 'anti-diagonal'
            or 'column'
        */

        
        for(int col=0;col<board.size();col++)
        {

            /*
                If the col, or diagid or antiid
                are used, means one of them has a Queen placed
                already which can attack, so look for other column
            */
            int diagid = row+col, antiid=row-col;

            if(cols.find(col)!=cols.end()||diag.find(diagid)!=diag.end()||anti.find(antiid)!=anti.end() )//chacking if sets contain any of the ids in them ,if yes then continue and check for next cell other wise place the Queen in the cell 
            {
            continue;
            }
           board[row][col]='Q'; //put 'Q ' if there are no other queens attacking 

            cols.insert(col);
              diag.insert(diagid);
                anti.insert(antiid);


                 solve(board,row+1,cols,diag,anti);

                 cols.erase(col);
              diag.erase(diagid);
                anti.erase(antiid);

         
             board[row][col]='.'; //put '.' and check for other columns 
          
        }
        
    
}
    vector<vector<string>> solveNQueens(int n) {
        if(n==0)
        {
            return {};
        }
          
        unordered_set<int> cols;
        unordered_set<int> diag;
        unordered_set<int> anti;
        vector<string>board(n,string(n,'.'));
        solve(board,0,cols,diag,anti);
        return res;
    }
};