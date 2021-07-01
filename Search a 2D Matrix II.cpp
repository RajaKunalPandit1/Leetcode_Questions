class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     
        int r = matrix.size();
        int c = matrix[0].size();
        
        int i=0,j=c-1;
        
        while(j>=0 && i<r){
            
            if(matrix[i][j]==target){
                return true;
            }else if(matrix[i][j]>target){
                j--;
            }else{
                i++;
            }
            
            
        }
        return false;
        
        
    }
};

// Another Solution

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

// Another Solution
// ---> Brute Force


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowLength = matrix.size(); 
        if(rowLength == 0)  //Checking if there are no rows, then false
            return false;
        int colLength = matrix[0].size();
        
        //Iterating through every value and checking against the target
        for(int i = 0; i < rowLength; i++)
            for(int j = 0; j < colLength; j++)
                if(matrix[i][j] == target)
                    return true;    //Target Found
        
        return false;   //Target Not Found
    }
};

// Another Solution 
// ----> Binary-Search


lass Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowLength = matrix.size();
        if(rowLength == 0)  //If the number of rows are zero, then returning false
            return false;
        int colLength = matrix[0].size();
        
        int shorterDimension = min(rowLength, colLength);   //Getting the shorter length between column and row size, it is necessary we take the shorter one or else index out of bound might occur
        
        for(int startPos = 0; startPos < shorterDimension; startPos++){
            //Searching first column slice and then row slice
            if(binarySearch(matrix, target, startPos, true) || binarySearch(matrix, target, startPos, false))
                return true;    //Target found
        }
        return false;   //Target not found
    }
    
    //Applying binary search to column or row slice of 2D matrix and searching for target
    bool binarySearch(vector<vector<int>>& matrix, int target, int startingPos, bool rowOrCol){
        int low = startingPos;  //This position changes via for loop implemented before
        //Therefore we go in an rotated L-shape kind of flow from left top to right bottom as the start
        //position increases
        //  |--------
        //  | |------
        //  | | |----
        int high = rowOrCol ? matrix[0].size()-1 : matrix.size()-1;     //Selecting high value based on searching column or row slice currently, if true then column, if not then row
              
        //The following is similar to how binary search works
        while(low <= high){
            int mid = (low + high) / 2;     //Calculating middle
            if(rowOrCol){
                //If searching columns
                if(matrix[startingPos][mid] > target)
                    high = mid - 1;
                else if(matrix[startingPos][mid] < target)
                    low = mid + 1;
                else
                    return true;
            }
            else{
                //If searching rows
                if(matrix[mid][startingPos] > target)
                    high = mid - 1;
                else if(matrix[mid][startingPos] < target)
                    low = mid + 1;
                else
                    return true;
            }
        }
        return false;   //When target now found in this iteration
    }
};

// Another Solution Using Divide & Conquer

class Solution {
private:
    vector<vector<int>> matrixLoc;
    int targLoc;

public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //Transfering to local variables for less variables to pass during recursion
        matrixLoc = matrix;     
        targLoc = target;
        
        if(matrixLoc.size() == 0)   //Checking if no rows present, then returning false
            return false;
        
        //Starting search from top leftmost index to rightmost bottom index
        return recursiveSearch(0, 0, matrix.size()-1, matrix[0].size()-1);
    }
    
    bool recursiveSearch(int rowLow, int colLow, int rowHigh, int colHigh){
        
        //Checking if the matrix is having no height or width
        if(colLow > colHigh || rowLow > rowHigh)
            return false;
        
        //Checking if the values at extreme ends of given matrix are either bigger or smaller than target, then target would not be present in the matrix
        else if(matrixLoc[rowLow][colLow] > targLoc || matrixLoc[rowHigh][colHigh] < targLoc)
            return false;
        
        else{
            int colMid = colLow + (colHigh-colLow)/2;
        
            //To find such a row where,
            //matrixLoc[row-1][colMid] < targetLoc < matrixLoc[row][colMid]
            int row = rowLow;
            while(row <=  rowHigh && matrixLoc[row][colMid] <= targLoc){
                //checking middle column elements against target value
                if(matrixLoc[row][colMid] == targLoc)   
                    return true;
                
                ++row;
            }
            
            //Recursively now checking the bottom left and top right sub matrices formed
            return recursiveSearch(row, colLow, rowHigh, colMid-1) || recursiveSearch(rowLow, colMid+1, row-1, colHigh);
        }
    }
};
