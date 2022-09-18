Output Status : 

Runtime: 30 ms, faster than 39.01% of C++ online submissions for Trapping Rain Water.
Memory Usage: 19.9 MB, less than 60.61% of C++ online submissions for Trapping Rain Water.

class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        int res = 0;
        int lmax[n],rmax[n];
        
        lmax[0] = height[0];
        rmax[n-1] = height[n-1];
        
        for(int i=1;i<n;i++){
            lmax[i] = max(height[i],lmax[i-1]);
        }
        
        for(int i=n-2;i>=0;i--){
            rmax[i] = max(height[i],rmax[i+1]);
        }
        
        for(int i=1;i<n-1;i++){
            res += min(lmax[i],rmax[i]) - height[i];
        }
        return res;
        
    }
};
