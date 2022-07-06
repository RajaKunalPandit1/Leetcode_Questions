Output Status : 

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Fibonacci Number.
Memory Usage: 5.9 MB, less than 41.61% of C++ online submissions for Fibonacci Number


// Naive Solution :: Time : O(2^N) :: Aux_Space : O(N)

class Solution {
public:
    int fib(int n) {
        
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        return (fib(n-1)+fib(n-2));
    }
};

// Better Solution :: Time : O(N) :: Aux_Space : O(N)

class Solution {
public:
    int fib(int n) {
     
        if(n<2){
            return n;
        }
        
        int memo[n+1];
        
        memo[0] = 0;
        memo[1] = 1;
        
        for(int i = 2;i<=n;i++){
            memo[i] = memo[i-1] + memo[i-2];
        }
        return memo[n];
    }
};

// Efficient Solution :: Time : O(N) :: Aux_Space : O(1)

class Solution {
public:
    int fib(int n) {
        
        if(n<2){
            return n;
        }
        
        int a = 0,b=1,c=0;
        
        for(int i=1;i<n;i++){
            c = a+b;
            a = b;
            b = c;
        }
        return c;
    }
};

