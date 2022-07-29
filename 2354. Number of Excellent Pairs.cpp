Output Status : 

56 / 56 test cases passed.
Status: Accepted
Runtime: 333 ms
Memory Usage: 86.6 MB
Submitted: 8 minutes ago


// Time : O(N*logN) :: Aux_Space : O(N)

class Solution {
public:
    long long countExcellentPairs(vector<int>& nums, int k) {
        
        long long cnt[30] = {},res = 0;
        
        unordered_set<int> st(nums.begin(),nums.end());
        
        for(auto x: st){
            ++cnt[__builtin_popcount(x)];
        }
        
        for(int i=0;i<30;i++){
            for(int j=0;j<30;j++){
                
                if(i+j >= k){
                    res += cnt[i]*cnt[j];
                }
            }
        }
        
        return res;
    }
};
