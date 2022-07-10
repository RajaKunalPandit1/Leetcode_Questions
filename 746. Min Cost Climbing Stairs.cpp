Output Status : 

Runtime: 3 ms, faster than 97.24% of C++ online submissions for Min Cost Climbing Stairs.
Memory Usage: 13.7 MB, less than 79.79% of C++ online submissions for Min Cost Climbing Stairs.
  

// Recursive Solution DP Memoization :: Time : O(N) :: Aux_Space : O(N)
  
class Solution {
public:
    
    int min_cost_climbing_stairs(vector<int> &cost, int idx, vector<int> &memo){
        
        int n = cost.size();
        
        if(idx == n-1 || idx == n-2){
            return cost[idx];
        }
        
        if(memo[idx] !=0){
            return memo[idx];
        }
        
        int x = min_cost_climbing_stairs(cost,idx+1,memo);
        int y = min_cost_climbing_stairs(cost,idx+2,memo);
        
        memo[idx] = min(x,y) + cost[idx];
        
        return memo[idx];
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        if(cost.size() == 2){
            return min(cost[0],cost[1]);
        }
        
        vector<int> memo(1001);
        
        int x = min_cost_climbing_stairs(cost,0,memo);
        int y = min_cost_climbing_stairs(cost,1,memo);
        
        return min(x,y);
    }
};

// Iterative Solution Using Tabulation :: Time : O(N) :: Aux_Space : O(N)

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        
        int dp[n];
        
        for(int i=0;i<n;i++){
            
            if(i<2)
                dp[i] = cost[i];
            else
                dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
        }
        
        return min(dp[n-1],dp[n-2]);
    }
};


// Space Efficient Solution :: Time : O(N) :: Aux_Space : O(1)


class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        
        int first = cost[0];
        int second = cost[1];
        
        if(n<=2){
            return min(first,second);
        }
        
        for(int i=2;i<n;i++){
            
            int curr = cost[i] + min(first,second);
            first = second;
            second = curr;
        }
        return min(first,second);
    }
};
