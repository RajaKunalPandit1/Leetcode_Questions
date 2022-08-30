Output Status : 

Runtime: 7 ms, faster than 17.34% of C++ online submissions for Rotate Image.
Memory Usage: 7.1 MB, less than 73.79% of C++ online submissions for Rotate Image.


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        
        for(int i=0;i<row;i++){
            for(int j=i+1;j<row;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int i=0;i<row;i++){
            
            int low = 0,high = row-1;
            
            while(low < high){
                swap(matrix[i][low],matrix[i][high]);
                low++;
                high--;
            }
        }
        
    }
};
