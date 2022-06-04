Output Status: 

Runtime: 3 ms, faster than 96.12% of C++ online submissions for N-Queens.
Memory Usage: 7.3 MB, less than 67.79% of C++ online submissions for N-Queens.


 // Naive Solution as isSafe function takes O(3n) time, Resultant Time : O (N*3N)
  
  class Solution {
public:
    
    bool isSafe(int row,int col, vector<string> board, int n){
        
        int duprow = row;
        int dupcol = col;
        
        // let's check if there's any queen or not on the upper diagonal 
        
        while(row>=0 && col >= 0){
            
            if(board[row][col] == 'Q'){
                return false;
            }
            col--;
            row--;
        }
        
        row = duprow;
        col = dupcol;
        
        // let's check if there's any queen or not on the right side
        
        while(col>=0){
            if(board[row][col] == 'Q'){
                return false;
            }
            col--;
        }
        
        row = duprow;
        col = dupcol;
        
        // let's check if there's any queen or not on the lower diagonal 
        
        while(row<n && col>=0){
            if(board[row][col] == 'Q'){
                return false;
            }
            row++;
            col--;
        }
        return true;
    }
    
    // this function checks where we can put the queen without any fight
    
    void solve(int col,vector<string> &board, vector<vector<string>> &ans, int n){
        
        if(col == n){
            ans.push_back(board);
            return;
        }
        
        for(int row = 0;row<n;row++){
            
            if(isSafe(row,col,board,n)){
                board[row][col] = 'Q';
                solve(col+1,board,ans,n);
                board[row][col] = '.';
            }
        }
    }
    
    
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> res;
        vector<string> board(n);
        string s(n,'.');
        
        for(int i=0;i<n;i++){
            board[i] = s;
        }
        
        solve(0,board,res,n);
        return res;
    }
};

// Efficient Solution Using Hashing  

class Solution {
public:
    
    void solve(int col, vector<string> &board, vector<vector<string>> &ans, vector<int> &leftRow, vector<int> &upperDiagonal, vector<int> &lowerDiagonal, int n){
        
        if(col == n){
            ans.push_back(board);
            return;
        }
        
        for(int row = 0; row<n; row++){
            
            if(leftRow[row] == 0 && lowerDiagonal[row+col] == 0 && upperDiagonal[n-1+col-row] == 0){
                
                board[row][col] = 'Q';
                leftRow[row] = 1;
                lowerDiagonal[row+col] = 1;
                upperDiagonal[n-1 + col - row] = 1;
                solve(col+1,board,ans,leftRow,upperDiagonal,lowerDiagonal,n);
                
                board[row][col] = '.';
                leftRow[row] = 0;
                lowerDiagonal[row+col] = 0;
                upperDiagonal[n-1+col-row] = 0;
                
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> res;
        vector<string> board(n);
        
        string s(n,'.');
        
        for(int i=0;i<n;i++){
            board[i] = s;
        }
        
        vector<int> leftRow(n,0),upperDiagonal(2*n-1,0),lowerDiagonal(2*n-1,0);
        solve(0,board,res,leftRow,upperDiagonal,lowerDiagonal,n);
        return res;
        
    }
};
