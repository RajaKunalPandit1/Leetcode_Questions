Output Status : 

Runtime
15 ms
Beats
82.4%
Memory
10.4 MB
Beats
71.33%


// Naive Sol : 

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int row = grid.size(),col = grid[0].size();
        int res = 0;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j] < 0){
                    res++;
                }
            }
        }
        return res;
    }
};

// Efficient Sol : 

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int row = grid.size(),col = grid[0].size();
        int res = 0;

        int i=0,j=col-1;

        while(i< row){

            while(j >=0 && grid[i][j] < 0){
                j--;
            }
            res += col-j-1;
            i++;
        }
        return res;
    }
};
