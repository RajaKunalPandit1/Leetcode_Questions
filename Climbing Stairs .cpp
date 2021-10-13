Output Status:

Runtime: 4 ms, faster than 11.99% of C++ online submissions for Climbing Stairs.
Memory Usage: 6.2 MB, less than 26.71% of C++ online submissions for Climbing Stairs.

class Solution {
public:
    int climbStairs(int n) {
        
       vector<int> DP(n+1, -1);  
        return climb(n, DP);
    }
    
    int climb(int n, vector<int> &DP)
    {
        if(n == 0 || n == 1) return 1;                             
        return DP[n] != -1?DP[n] : DP[n] = climb(n-1, DP) + climb(n-2, DP);
        
    }
};
