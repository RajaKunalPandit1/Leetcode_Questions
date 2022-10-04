Output Status : 

Problem Solved Successfully
Test Cases Passed: 
10154 /10154
Total Points Scored: 
2 /2
Your Total Score: 
1434
Total Time Taken: 
0.36
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    long long int dp[101][101];
    long long int solve(int x,int y,int m,int n){
        if(x == m-1 && y==n-1){
            return 1;
        }
        if(x>=m || y>=n){
            return 0;
        }
        if(dp[x][y]!=-1){
            return dp[x][y];
        }
        return dp[x][y] = (solve(x+1,y,m,n)+solve(x,y+1,m,n))%1000000007;
    }
    long long int numberOfPaths(int m, int n){
        // code here
        memset(dp,-1,sizeof(dp));
        return solve(0,0,m,n);
    }
};
