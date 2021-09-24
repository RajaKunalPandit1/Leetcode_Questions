Output Status:

Runtime: 0 ms, faster than 100.00% of C++ online submissions for N-th Tribonacci Number.
Memory Usage: 5.7 MB, less than 97.18% of C++ online submissions for N-th Tribonacci Number.


class Solution {
public:
    int tribonacci(int n) {
    int dp[3]={0,1,1};
    for(int i=3;i<=n;i++){
        dp[i%3]+=dp[(i+1)%3]+dp[(i+2)%3];
    }
    return dp[n%3];
}
};
