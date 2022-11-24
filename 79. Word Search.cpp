Output Status : 

Runtime: 798 ms, faster than 42.36% of C++ online submissions for Word Search.
Memory Usage: 8 MB, less than 46.96% of C++ online submissions for Word Search.


class Solution {
public:
    
    int dx[4]={0,-1,0,1};
    int dy[4]={-1,0,1,0};
    
    bool dfs(vector<vector<char>>& board,string &word,int index,int &i,int &j){
        
        if(word.size()==index) return true;
        
        if(i<0 || j<0 || j>=board[0].size() || i>=board.size() || word[index]!=board[i][j] || board[i][j]=='*'){
            return false;
        }            
        
        char ch=board[i][j];
        board[i][j]='*';  
        
        for(int k=0;k<4;k++){
            
            int xx=i + dx[k];
            int yy=j + dy[k];
            
            if(dfs(board,word,index + 1,xx,yy)) return true;
        }
        
        board[i][j]=ch;
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        
        int row = board.size();
        int col = board[0].size();
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(board[i][j] == word[0]){
                    if(dfs(board,word,0,i,j) == true){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
