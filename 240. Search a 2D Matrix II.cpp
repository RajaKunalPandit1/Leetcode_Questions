Output Status : 

Runtime: 204 ms, faster than 37.62% of C++ online submissions for Search a 2D Matrix II.
Memory Usage: 14.9 MB, less than 21.86% of C++ online submissions for Search a 2D Matrix II.


// Naive Solution :: Time : O(M*N) :: Aux_Space : O(1)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     
        int row = matrix.size();
        int col = matrix[0].size();
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j] == target){
                    return true;
                }
            }
        }
        return false;
    }
};

// Efficient Solution :: Time : O(M+N) :: Aux_Space : O(1)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int i=0,j=col-1;
        
        while(j>=0 && i<row){
            
            if(matrix[i][j] == target){
                return true;
            }else if(matrix[i][j] > target){
                j--;
            }else{
                i++;
            }
        }
        return false;
    }
};

// Another Efficient Solution :: 

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = m ? matrix[0].size() : 0, r = 0, c = n - 1;
        while (r < m && c >= 0) {
            if (matrix[r][c] == target) {
                return true;
            }
            matrix[r][c] > target ? c-- : r++;
        }
        return false;
    }
};
