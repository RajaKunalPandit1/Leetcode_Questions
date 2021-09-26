Output Status:

Runtime: 8 ms, faster than 83.93% of C++ online submissions for Transform to Chessboard.
Memory Usage: 10.1 MB, less than 55.36% of C++ online submissions for Transform to Chessboard.
  
  
  class Solution {
public:
    int movesToChessboard(vector<vector<int>>& board) {
        int n = size(board); 
        
        auto fn = [&](vector<int>& vals) {
            int total = 0, odd = 0; 
            for (int i = 0; i < size(vals); ++i) {
                if (vals[0] == vals[i]) {
                    ++total; 
                    if (i&1) ++odd; 
                } else if ((vals[0] ^ vals[i]) != (1 << n) - 1) return 100; 
            }
            int ans = 100; 
            if (size(vals) <= 2*total && 2*total <= size(vals)+1) ans = min(ans, odd); 
            if (size(vals)-1 <= 2*total && 2*total <= size(vals)) ans = min(ans, total - odd); 
            return ans; 
        }; 
        
        vector<int> rows(n), cols(n); 
        for (int i = 0; i < n; ++i) 
            for (int j = 0; j < n; ++j) 
                if (board[i][j]) {
                    rows[i] ^= 1 << j; 
                    cols[j] ^= 1 << i; 
                }
        int ans = fn(rows) + fn(cols); 
        return ans < 100 ? ans : -1; 
    }
};
