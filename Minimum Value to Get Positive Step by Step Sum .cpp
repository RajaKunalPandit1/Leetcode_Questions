Output Status:

Runtime: 4 ms, faster than 27.86% of C++ online submissions for Minimum Value to Get Positive Step by Step Sum.
Memory Usage: 7.3 MB, less than 58.40% of C++ online submissions for Minimum Value to Get Positive Step by Step Sum.

class Solution {
public:
    int minStartValue(vector<int>& nums) {
         int ans = 0 , minAns=0;
        for(int x : nums){
            ans+= x;
            if(ans < minAns)
                minAns = ans;
        }
        return -minAns+1;
    }
};

