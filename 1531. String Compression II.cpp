Output Status : 

Runtime: 54 ms, faster than 84.85% of C++ online submissions for String Compression II.
Memory Usage: 6.4 MB, less than 76.52% of C++ online submissions for String Compression II.

class Solution {
public:
    const static int N = 127;
    int dp[N][N];

    string str;
    int n;

    // get length of digit
    inline int xs(int x) { return x == 1 ? 0 : x < 10 ? 1 : x < 100 ? 2 : 3; }
    
    
    int solve(int left, int k){
        
        if(k<0) return N;
        
        if(left >=n || (n-left) <= k){
            return 0;
        }
        
        int &res = dp[left][k];
        if(res != -1){
            return res;
        }
        
        res = N;
        
        int cnt[26] = {0};
        
         for(int j = left, most = 0; j < n; j++) {
            most = max(most, ++cnt[str[j] - 'a']);  
            res = min(res, 1 + xs(most) + solve(j + 1, k - (j - left + 1 - most)));
        }
        return res;
    }
    
    int getLengthOfOptimalCompression(string s, int k) {
        memset(dp, -1, sizeof(dp));
        str = s;
        n = s.size();
        return solve(0, k);
    }
};
