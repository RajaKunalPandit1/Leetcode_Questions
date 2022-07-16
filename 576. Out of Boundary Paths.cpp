Output Status : 

Runtime: 9 ms, faster than 79.68% of C++ online submissions for Out of Boundary Paths.
Memory Usage: 6.5 MB, less than 78.30% of C++ online submissions for Out of Boundary Paths.


// Time : O(m * n * maxMove) :: Aux_Space : O(m * n * maxMove)

class Solution {
public:
    
    int memo[51][51][51];
    int mod = 1000000007;
    
    long dfs(int m, int n , int maxMove, int startRow, int startColumn){
        
        if(startRow>=m || startRow<0 || startColumn>=n || startColumn<0){
            return 1;
        }
        
        if(maxMove <= 0) return 0;
        
        if(memo[startRow][startColumn][maxMove] != -1) return memo[startRow][startColumn][maxMove];
        
        long res = 0;
        
        res += dfs(m,n,maxMove-1,startRow+1,startColumn);
        res += dfs(m,n,maxMove-1,startRow-1,startColumn);
        res += dfs(m,n,maxMove-1,startRow,startColumn+1);
        res += dfs(m,n,maxMove-1,startRow,startColumn-1);
        
        return memo[startRow][startColumn][maxMove] = res % mod;
        
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        
        memset(memo,-1,sizeof(memo));
        
        return dfs(m,n,maxMove,startRow,startColumn) % mod;
        
    }
};
