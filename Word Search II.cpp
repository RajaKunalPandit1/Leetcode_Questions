Output Status:

Runtime: 4 ms, faster than 98.57% of C++ online submissions for Word Search II.
Memory Usage: 9.1 MB, less than 91.79% of C++ online submissions for Word Search II.
  
  bool dfs(vector<vector<char>>& board, int i, int j, string& word) {
    if (!word.size())
        return true;
    if (i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j] != word[0])  
        return false;
    char c = board[i][j];
    board[i][j] = '*';
    string s = word.substr(1);
    bool ret = dfs(board, i-1, j, s) || dfs(board, i+1, j, s) || dfs(board, i, j-1, s) || dfs(board, i, j+1, s);
    board[i][j] = c;
    return ret;
}
class Solution {
public:
    vector<string> findWords(vector<vector<char>>& v, vector<string>& s) {        
        vector<string> ans;
        for(auto &x:s){
            int p=0;
            reverse(x.begin(), x.end());
            for (int i = 0; i < v.size(); i++){ 
                for (int j = 0; j < v[0].size(); j++){ 
                    if (dfs(v, i, j, x)){
                        p=1;break;
                    }
                }
                if(p)break;
            }
            if(p){
                reverse(x.begin(), x.end());
                ans.push_back(x);
            }
        }
        return ans;
    }
};


